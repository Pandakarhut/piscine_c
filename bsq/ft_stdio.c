/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esormune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:35:52 by esormune          #+#    #+#             */
/*   Updated: 2020/02/24 14:08:47 by esormune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

char	*ft_stdio(void)
{
	char	*str;
	char	buf[1];
	int		i;

	if (!(str = malloc(sizeof(char*))))
		return (NULL);
	i = 0;
	while (read(0, buf, 1))
	{
		str[i] = buf[0];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_stdio_first(void)
{
	char	*first;
	char	buf[1];
	int		i;

	if (!(first = malloc(sizeof(char*))))
		return (NULL);
	i = 0;
	while(read(0, buf, 1) != '\n' && i < 4)
	{
		first[i] = buf[0];
		i++;
	}
	first[i] = '\0';
	return (first);
}
