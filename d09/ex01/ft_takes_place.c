/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 17:53:51 by jtian             #+#    #+#             */
/*   Updated: 2020/02/13 18:26:16 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	*start;
	char	*end;
	int		start_hour;
	int		end_hour;

	start = "A.M.";
	end = "A.M.";
	if (hour > 11)
		start = "P.M.";
	if (hour > 10 && hour != 23)
		end = "P.M.";
	start_hour = hour;
	if (hour == 0)
		start_hour = 12;
	if (hour >= 13)
		start_hour = hour - 12;
	end_hour = start_hour + 1;
	if (end_hour > 12)
		end_hour = 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d.00 %s AND %d.00 %s\n", start_hour, start, end_hour, end);
}
