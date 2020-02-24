# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esormune <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 11:50:53 by esormune          #+#    #+#              #
#    Updated: 2020/02/24 15:36:09 by esormune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = *.c

HEADERS = *.h

NAME = bsq

LIBRARIES = ft

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(HEADERS) $(SRCS) -L. -l$(LIBRARIES) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
