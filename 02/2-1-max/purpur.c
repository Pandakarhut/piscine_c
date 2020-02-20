#include <unistd.h>

int		max(int *tab, int len)
{
	int i;
	int max;
	i = 1;
	max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return(max);
}

int main(int ac, char **av)
{
	int numbers[4] = {1,2,3,4};
	int max_num;
	char value;
	max_num = max(numbers, 4);
	value = max_num + '0';
	write(1, &value, 1);
	return(0);
}