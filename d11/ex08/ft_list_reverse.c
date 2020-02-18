/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:17:33 by jtian             #+#    #+#             */
/*   Updated: 2020/02/18 20:21:07 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *pre;
	t_list *next;
	t_list *current;

	pre = NULL;
	current = *begin_list;
	while (current != NULL)
	{
		next = current->next;
		current->next = pre;
		pre = current;
		current = next;
	}
	*begin_list = pre;
}
