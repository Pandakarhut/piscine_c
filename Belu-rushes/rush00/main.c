/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamesser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:49:52 by mamesser          #+#    #+#             */
/*   Updated: 2020/02/09 16:35:01 by mamesser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rush(int x, int y);

int	ft_atoi(const char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * negative);
}

int		main(int ac, char **av)
{
	ft_rush(ft_atoi(av[1]), ft_atoi(av[2]));
	return (0);
}