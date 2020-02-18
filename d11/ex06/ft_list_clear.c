/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:46:54 by jtian             #+#    #+#             */
/*   Updated: 2020/02/18 19:51:55 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *current;
	t_list *tmp;

	current = *begin_list;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*begin_list = NULL;
}
