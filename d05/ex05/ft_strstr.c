/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 14:49:12 by jtian             #+#    #+#             */
/*   Updated: 2020/02/11 17:40:12 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index;

	index = 0;
	while (*(to_find + index) && *(str + index))
	{
		if (*(to_find + index) != *(str + index))
		{
			str++;
			index = 0;
		}
		else
		{
			index++;
		}
	}
	if (*(to_find + index) == '\0')
		return (str);
	return (0);
}
