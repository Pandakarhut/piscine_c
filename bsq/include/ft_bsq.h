/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esormune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:12:54 by esormune          #+#    #+#             */
/*   Updated: 2020/02/26 19:01:53 by esormune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct	s_coordinates
{
	int x;
	int y;
}				t_coordinates;
t_coordinates	g_crd;
int				g_result;
int				g_size;
int				g_len;
char			g_e;
char			g_o;
char			g_f;
char			*ft_file(char *str, char *first);
char			*ft_first(char *str);
char			*ft_stdio(void);
char			*ft_stdio_first(void);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
void			ft_define(char *str, char *s2);
int				ft_atoi(char *str);
int				ft_len(char *str);
int				ft_strlen(char *str);
void			ft_2d(char *str);
void			ft_print_map(int x, int y, char str[x][y]);
int				ft_min(int a, int b, int c);
void			ft_change(int x, int y, char str[x][y]);
void			ft_solve(int y, int x, int str[x][y]);
void			ft_new_map(int y, int x, char str[y][x]);
void			ft_stinput(void);
void			ft_finput(char *argv);
void			ft_reset(void);
void			ft_free(char *first, char *new);
void			ft_error(void);
void			ft_solve_x(int y, int x, int str[y][x]);
void			ft_solve_y(int y, int x, int str[y][x]);
void			ft_save(int str[g_size][g_len], int i, int j);
int				ft_forbidden(char *str);
void			ft_deep_error(void);

#endif
