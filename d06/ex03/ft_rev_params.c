/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:40:14 by jtian             #+#    #+#             */
/*   Updated: 2020/02/12 18:07:56 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_rev_params(int argc, char **argv)
{
	while (argc >= 2)
	{
		while (*argv[argc - 1])
		{
			ft_putchar(*argv[argc - 1]);
			argv[argc - 1]++;
		}
		ft_putchar('\n');
		argc--;
	}
}

int		main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}
