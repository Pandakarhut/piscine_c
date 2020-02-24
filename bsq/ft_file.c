/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esormune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:03:18 by esormune          #+#    #+#             */
/*   Updated: 2020/02/24 16:00:28 by esormune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"
#include <stdio.h>

char	*ft_file(char *str)
{
	char 	buf[1];
	char	*new;
	int		file;
	int		i;

	if (!(new = malloc(sizeof(char*))))
		return (NULL);
	i = -5;
	file = open(str, O_RDONLY);
	if (file < 0)
		write (2, "Map error.", 10);
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

	if (!(first = malloc(sizeof(char*))))
		return (NULL);
	i = 0;
	file = open(str, O_RDONLY);
	if (file < 0)
		write (2, "Map error.", 10);
	while (read(file, buf, 1) != '\n' && i < 4)
	{
		first[i] = buf[0];
		i++;
	}
	first[i] = '\0';
	close(file);
	return (first);
}

int		main(int argc, char **argv)
{
	char	*new;
	char	*first;
	int		i;

	i = 1;
	if (argc == 1)
	{
		first = ft_stdio_first();
		new = ft_stdio();
		printf("whole is:\n%s\n", new);
		ft_define(first);
		printf("size is: %d\nempty is %c\nobstacle is %c\nfill is %c\n", g_size, g_e, g_o, g_f);
		return (0);
	}
	while (i < argc)
	{
		first = ft_first(argv[i]);
		new = ft_file(argv[i]);
		printf("whole is:\n%s", new);
		ft_define(first);
		printf("size is %d\nempty is %c\nobstacle is %c\nfill is %c\n", g_size, g_e, g_o, g_f);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
