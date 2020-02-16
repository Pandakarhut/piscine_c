/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 12:22:17 by jtian             #+#    #+#             */
/*   Updated: 2020/02/11 13:58:17 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int multiplier;
	int value;

	value = 0;
	multiplier = 1;
	while (*str)
	{
		if (*str == '-')
			multiplier = -1;
		else
		{
			value *= 10;
			value += *str - '0';
		}
		str++;
	}
	return (value * muultiplier);
}
