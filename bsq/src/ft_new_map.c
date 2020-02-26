/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esormune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:56:30 by esormune          #+#    #+#             */
/*   Updated: 2020/02/26 19:01:39 by esormune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_new_map(int y, int x, char str[y][x])
{
	int	i;
	int	j;
	int k;
	int m;
	int n;

	i = 0;
	j = 0;
	k = g_result;
	m = g_crd.x;
	n = g_crd.y;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((i <= m && (i > (m - k))) &&
					(j <= n && (j > (n - k))))
				str[j][i] = g_f;
			i++;
		}
		j++;
	}
	ft_print_map(y, x, str);
}

void	ft_print_map(int x, int y, char str[x][y])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < g_size)
	{
		while (i < g_len)
		{
			ft_putchar(str[j][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}
