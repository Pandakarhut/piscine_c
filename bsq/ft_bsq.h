/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esormune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:12:54 by esormune          #+#    #+#             */
/*   Updated: 2020/02/24 15:33:14 by esormune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <stdlib.h>

int		g_size;
char	g_e;
char	g_o;
char	g_f;
char	*ft_file(char *str);
char	*ft_first(char *str);
char	*ft_stdio(void);
char	*ft_stdio_first(void);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_define(char *str);
int		ft_atoi(char *str);

#endif
