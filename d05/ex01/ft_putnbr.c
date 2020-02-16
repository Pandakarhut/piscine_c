/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:34:31 by jtian             #+#    #+#             */
/*   Updated: 2020/02/10 17:06:35 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int negative_bonus;

	negative_bonus = 0;
	if (nb == -2147483648)
	{
		negative_bonus = 1;
		nb++;
	}
	if (nb < 0)
	{
		nb *= (-1);
		ft_putchar('-');
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + negative_bonus + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + negative_bonus + '0');
	}
}
