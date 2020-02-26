/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esormune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:33:51 by esormune          #+#    #+#             */
/*   Updated: 2020/02/26 18:59:16 by esormune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_solve(int y, int x, int str[y][x])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j < y)
	{
		while (i < x)
		{
			if (str[j][i] == 1)
			{
				str[j][i] = ft_min(str[j - 1][i], str[j][i - 1],
						str[j - 1][i - 1]) + 1;
				if (str[j][i] > g_result)
					ft_save(str, i, j);
			}
			i++;
		}
		i = 1;
		j++;
	}
	if (g_result == 0 || g_result == 1)
		ft_solve_x(y, x, str);
}

int		ft_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	else
		return (c);
}

void	ft_save(int str[g_size][g_len], int i, int j)
{
	g_result = str[j][i];
	g_crd.x = i;
	g_crd.y = j;
}

void	ft_solve_x(int y, int x, int str[y][x])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			if (str[j][i] == 1)
			{
				g_crd.x = i;
				g_crd.y = j;
				g_result = 1;
				return ;
			}
			else
				i++;
		}
		i = 0;
		j++;
	}
	ft_deep_error();
}

void	ft_deep_error(void)
{
	write(2, "Map error.", 10);
}
