/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-rush00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamesser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:52:07 by mamesser          #+#    #+#             */
/*   Updated: 2020/02/09 16:36:05 by mamesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_create_frame_line(int x)
{
	int a;

	a = 0;
	ft_putchar('o');
	while (a < x - 2)
	{
		ft_putchar('-');
		a++;
	}
	if (x > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	ft_create_body_line(int x)
{
	int a;

	a = 0;
	ft_putchar('|');
	while (a < x - 2)
	{
		ft_putchar(' ');
		a++;
	}
	if (x > 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	ft_rush(int x, int y)
{
	int a;

	a = 0;
	if (x > 0 && y > 0)
	{
		ft_create_frame_line(x);
		if (y > 1)
		{
			if (y > 2)
			{
				while (a < y - 2)
				{
					ft_create_body_line(x);
					a++;
				}
			}
			ft_create_frame_line(x);
		}
	}
}
