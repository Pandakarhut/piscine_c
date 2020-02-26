/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esormune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 09:57:36 by esormune          #+#    #+#             */
/*   Updated: 2020/02/26 18:48:45 by esormune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc == 1)
	{
		ft_stinput();
		return (0);
	}
	else if (argc > 1)
	{
		while (i < argc)
		{
			ft_finput(argv[i]);
			i++;
		}
	}
	else
		write(2, "Map error.\n", 11);
	return (0);
}
