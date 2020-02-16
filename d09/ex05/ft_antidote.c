/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 21:59:17 by jtian             #+#    #+#             */
/*   Updated: 2020/02/13 22:22:31 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i < k && i > j) || (i > k && i < j))
		return (i);
	if ((j < k && j > i) || (j > k && j < i))
		return (j);
	return (k);
}
