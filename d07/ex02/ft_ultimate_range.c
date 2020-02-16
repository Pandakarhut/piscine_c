/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 12:41:40 by jtian             #+#    #+#             */
/*   Updated: 2020/02/13 13:45:07 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *numbers;
	int i;
	int length;

	i = 0;
	length = max - min;
	if (min >= max)
	{
		numbers = NULL;
		return (0);
	}
	numbers = malloc(sizeof(int) * length);
	while (min < max)
		numbers[i++] = min++;
	*range = numbers;
	return (length);
}
