/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 20:06:25 by jtian             #+#    #+#             */
/*   Updated: 2020/02/11 20:14:16 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (*(s1 + index) == *(s2 + index) && *(s1 + index) && *(s2 + index))
	{
		index++;
		if (index == n)
			return (0);
	}
	return (*(s1 + index) - *(s2 + index));
}
