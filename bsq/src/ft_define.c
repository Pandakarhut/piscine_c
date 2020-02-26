/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esormune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:20:44 by esormune          #+#    #+#             */
/*   Updated: 2020/02/26 16:32:30 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_define(char *str, char *s2)
{
	g_size = ft_atoi(str);
	g_e = str[(ft_strlen(str) - 3)];
	g_o = str[(ft_strlen(str) - 2)];
	g_f = str[(ft_strlen(str) - 1)];
	g_len = ft_len(s2);
}
