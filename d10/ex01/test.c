#include <unistd.h>

void    ft_foreach(int *tab, int length, void (*f)(int))
{
    int i;

    i = 0;
    while (i < length)
    {
        f(tab[i]);
        i++;
    }
}

void ft_putnbr(int n)
{
	char number;
	number = n + '0';
	write(1, &number, 1);
}

int main()
{
	int numbers[5] = {1, 2, 3, 4, 5};

	ft_foreach(numbers, 5, &ft_putnbr);
	return 0;
}
