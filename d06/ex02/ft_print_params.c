/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtian <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 15:15:36 by jtian             #+#    #+#             */
/*   Updated: 2020/02/12 17:54:35 by jtian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_params(int argc, char **argv)
{
	int count;

	count = 1;
	while (count < argc)
	{
		while (*argv[count] != '\0')
		{
			ft_putchar(*argv[count]);
			argv[count]++;
		}
		ft_putchar('\n');
		count++;
	}
}

int		main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}
