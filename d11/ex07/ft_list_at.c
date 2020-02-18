/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:09:01 by jtian             #+#    #+#             */
/*   Updated: 2020/02/18 20:14:23 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;

	if (!begin_list)
		return (NULL);
	i = 0;
	while (i < nbr)
	{
		if (begin_list->next)
			begin_list = begin_list->next;
		else
			return (NULL);
		i++;
	}
	return (begin_list);
}
