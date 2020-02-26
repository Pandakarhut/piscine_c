/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esormune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:03:18 by esormune          #+#    #+#             */
/*   Updated: 2020/02/26 20:37:19 by esormune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"
#include <stdio.h>

char	*ft_file(char *str, char *first)
{
	char	buf[1];
	char	*new;
	int		file;
	int		i;

	if (!(new = malloc(sizeof(char) * 10000)))
		return (NULL);
	i = (-(ft_strlen(first) + 1));
	file = open(str, O_RDONLY);
	if (file < 0)
		write(2, "Map error.\n", 11);
	while (read(file, buf, 1))
	{
		new[i] = buf[0];
		i++;
	}
	close(file);
	new[i] = '\0';
	return (new);
}

char	*ft_first(char *str)
{
	char	*first;
	char	buf[1];
	int		file;
	int		i;

	if (!(first = malloc(sizeof(char) * 100)))
		return (NULL);
	i = 0;
	file = open(str, O_RDONLY);
	if (file < 0)
		write(2, "Map error.\n", 11);
	while (read(file, buf, 1) != 0 && buf[0] != '\n')
	{
		first[i] = buf[0];
		i++;
	}
	first[i] = '\0';
	close(file);
	return (first);
}
