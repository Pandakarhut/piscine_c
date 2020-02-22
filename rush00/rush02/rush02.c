/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamesser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 16:42:59 by mamesser          #+#    #+#             */
/*   Updated: 2020/02/09 16:58:48 by mamesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_create_top_line(int x)
{
	int a;

	a = 0;
	ft_putchar('A');
	while (a < x - 2)
	{
		ft_putchar('B');
		a++;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	ft_create_body_line(int x)
{
	int a;

	a = 0;
	ft_putchar('B');
	while (a < x - 2)
	{
		ft_putchar(' ');
		a++;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	ft_create_bottom_line(int x)
{
	int a;

	a = 0;
	ft_putchar('C');
	while (a < x - 2)
	{
		ft_putchar('B');
		a++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	ft_rush02(int x, int y)
{
	int a;

	if (x > 0 && y > 0)
	{
		ft_create_top_line(x);
		if (y > 1)
		{
			if (y > 2)
			{
				a = 0;
				while (a < y - 2)
				{
					ft_create_body_line(x);
					a++;
				}
			}
			ft_create_bottom_line(x);
		}
	}
}
