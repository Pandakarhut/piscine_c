/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 14:15:47 by jtian             #+#    #+#             */
/*   Updated: 2020/02/11 14:01:09 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		while (*src && count < n)
		{
			*dest = *src;
			dest++;
			src++;
			count++;
		}
		while (count < n)
		{
			*dest = '\0';
			dest++;
			count++;
		}
	}
	return (dest);
}
