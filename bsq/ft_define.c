/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esormune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:20:44 by esormune          #+#    #+#             */
/*   Updated: 2020/02/24 15:33:50 by esormune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

void	ft_define(char *str)
{
	g_size = ft_atoi(str);
	g_e = str[1];
	g_o = str[2];
	g_f = str[3];
}