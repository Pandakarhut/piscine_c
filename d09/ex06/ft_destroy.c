/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 22:55:57 by jtian             #+#    #+#             */
/*   Updated: 2020/02/13 23:01:24 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destory(char ***factory)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (factory[i])
	{
		while (factory[i][j])
		{
			free(factory[i][j]);
			j++;
		}
		j = 0;
		free(factory[i]);
		i++;
	}
	free(factory);
}
