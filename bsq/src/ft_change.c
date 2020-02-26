/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esormune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 18:53:43 by esormune          #+#    #+#             */
/*   Updated: 2020/02/26 20:12:55 by esormune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"
#include <stdio.h>

void	ft_change(int x, int y, char str[x][y])
{
	int		changed[g_size][g_len];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (j < g_size)
	{
		while (i < g_len && str[j][i] != '\0')
		{
			if (str[j][i] == g_o)
				changed[j][i] = 0;
			else if (str[j][i] == g_e)
				changed[j][i] = 1;
			i++;
		}
		changed[j][i] = '\0';
		i = 0;
		j++;
	}
	ft_solve(g_size, g_len, changed);
}

void	ft_2d(char *str)
{
	int		i;
	int		j;
	int		k;
	char	twod[g_size][g_len];

	i = 0;
	j = 0;
	k = 0;
	while (j < g_size)
	{
		i = 0;
		while (i < g_len && str[k] != '\n')
		{
			twod[j][i] = str[k];
			i++;
			k++;
		}
		twod[j][i] = '\0';
		k++;
		j++;
	}
	free(str);
	ft_change(g_size, g_len, twod);
	if (g_result > 0)
		ft_new_map(g_size, g_len, twod);
}

int		ft_forbidden(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != g_e && str[i] != g_o && str[i] != '\n')
			return (1);
		i++;
	}
	return (0);
}
