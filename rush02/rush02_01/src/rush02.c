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

void print_match(int rush, int columns, int rows)
{
	if (rush == 0)
		ft_putstr("[rush-00] [");
	else
		ft_putstr("[rush-01] [");
	
	ft_putnbr(columns);
	ft_putstr("] [");
	ft_putnbr(rows);
	ft_putstr("]\n");
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

int match_others(char *input)
{
	if (input[0] == 'A' && input[1] == '\n' && input[2] == '\0')
	{
		ft_putstr("[colle-02] [1] [1] || [colle-03] [1] [1] || [colle-04] [1] [1]\n");
		return(1);
	}

	return(0);
}

int main()
{
	char input[28000];
	int rows;
	int columns;
	int matched_rush;

	matched_rush = -1; //No match

	//Read value piped to program
	get_pipe_value(input);

	//Get input row and column count;
	rows = ft_rows(input);
	columns = ft_columns(input);
	
	//Check if it's rush00
	if(match_rush_00(input, rows, columns))
		matched_rush = 0;

	if(match_rush_01(input, rows, columns))
		matched_rush = 1;

	//Check if it's any of the others
	if(match_others(input))
	{
		return(0);
	}

	if (matched_rush == 0 || matched_rush == 1)
		print_match(matched_rush, columns, rows);
	else
		ft_putstr("aucune\n");

	return(0);
}