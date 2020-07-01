#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac != 2)
		write(1, "z", 1);
	else
	{
		while (*av[1])
		{
			if (*av[1] == 'z')
				write(1, "z", 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
