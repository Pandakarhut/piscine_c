#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtian <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 13:29:54 by jtian             #+#    #+#              #
#    Updated: 2020/02/20 13:33:22 by jtian            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

all: compile

compile:
	gcc -Wall -Wextra -Werror -c ft_cat.c -o ft_cat.o
	gcc -Wall -Wextra -Werror ft_cat.o -o ft_cat

clean:
	/bin/rm/ -f ft_cat.o

fclean: clean
	/bin/rm -f ft_cat

re: fclean all