#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtian <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 11:37:30 by jtian             #+#    #+#              #
#    Updated: 2020/02/20 13:21:21 by jtian            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

all: compile

compile:
	gcc -Wall -Wextra -Werror -c main.c -o main.o
	gcc -Wall -Wextra -Werror main.o -o ft_display_file

clean:
	/bin/rm -f main.o

fclean: clean
	/bin/rm -f ft_display_file

re: fclean all