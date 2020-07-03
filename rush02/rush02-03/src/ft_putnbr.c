#include "functions.h"

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