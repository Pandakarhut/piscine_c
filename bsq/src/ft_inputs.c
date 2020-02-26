/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esormune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 09:59:18 by esormune          #+#    #+#             */
/*   Updated: 2020/02/26 19:59:59 by esormune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"
#include <stdio.h>

void	ft_stinput(void)
{
	char	*first;
	char	*new;

	first = ft_stdio_first();
	new = ft_stdio();
	ft_define(first, new);
	if (!(g_len * g_size == (ft_strlen(new) - g_size)))
	{
		ft_error();
		return ;
	}
	if (ft_forbidden(new) == 1)
	{
		ft_error();
		return ;
	}
	free(first);
	ft_2d(new);
	ft_putchar('\n');
}

void	ft_finput(char *argv)
{
	char	*first;
	char	*new;

	first = ft_first(argv);
	new = ft_file(argv, first);
	ft_define(first, new);
	if ((!(g_len * g_size == (ft_strlen(new) - g_size))))
	{
		ft_error();
		return ;
	}
	if (ft_forbidden(new) == 1)
	{
		ft_error();
		return ;
	}
	free(first);
	ft_2d(new);
	ft_putchar('\n');
	ft_reset();
}

void	ft_reset(void)
{
	g_crd.x = 0;
	g_crd.y = 0;
	g_result = 0;
}

void	ft_free(char *first, char *new)
{
	free(first);
	free(new);
}

void	ft_error(void)
{
	write(2, "Map error.\n", 11);
}
