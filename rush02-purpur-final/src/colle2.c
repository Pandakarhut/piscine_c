#include <unistd.h>
#include <fcntl.h>
#include "rushes.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb *= (-1);
		ft_putchar('-');
	}

	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb+'0');
	}
	else
	{
		ft_putnbr(nb/10);
		ft_putchar((nb%10)+'0');
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_rows(char *str)
{
	int i;
	int rows;
	i = 0;
	rows = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			rows++;
		i++;
	}
	
	return(rows);
}

int ft_columns(char *str)
{
	int columns;
	columns = 0;

	while (str[columns] && str[columns] != '\n')
		columns++;

	return(columns);
}

void print_match(int rush, int columns, int rows, int *match_number)
{
	if(*match_number > 0)
		ft_putstr(" || ");

	if (rush == 0)
		ft_putstr("[rush-00] [");
	
	if (rush == 1)
		ft_putstr("[rush-01] [");

	if (rush == 2)
		ft_putstr("[rush-02] [");

	if (rush == 3)
		ft_putstr("[rush-03] [");

	if (rush == 4)
		ft_putstr("[rush-04] [");
	
	ft_putnbr(columns);
	ft_putstr("] [");
	ft_putnbr(rows);
	ft_putstr("]");

	(*match_number)++;
}

void get_pipe_value(char *input)
{
	char buf;
	int i;
	i = 0;

	while (read(0, &buf, 1) != 0)
	{
		input[i] = buf;
		i++;
	}
	input[i] = '\0';
}

int check_rushes(char *input, int rows, int columns)
{
	int match_count;
	match_count = 0;
	//Check if it's rush00
	if(match_rush_00(input, rows, columns))
		print_match(0, columns, rows, &match_count);

	if(match_rush_01(input, rows, columns))
		print_match(1, columns, rows, &match_count);

	if(match_rush_02(input, rows, columns))
		print_match(2, columns, rows, &match_count);

	if(match_rush_03(input, rows, columns))
		print_match(3, columns, rows, &match_count);

	if(match_rush_04(input, rows, columns))
		print_match(4, columns, rows, &match_count);

	return(match_count);
}

int main()
{
	char input[28000];
	int rows;
	int columns;
	int match_count;
	match_count = 0;

	//Read value piped to program
	get_pipe_value(input);

	//Get input row and column count;
	rows = ft_rows(input);
	columns = ft_columns(input);
	
	match_count = check_rushes(input, rows, columns);

	if(match_count == 0)
		ft_putstr("aucune\n");
	else
		ft_putstr("\n");

	return(0);
}