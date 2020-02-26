# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esormune <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 11:50:53 by esormune          #+#    #+#              #
#    Updated: 2020/02/26 20:13:32 by esormune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
PATH_SRC = ./src/
HEADERS = ./include/
FLAG = -Wall -Wextra -Werror
LIBRARY = ft
SRC = $(PATH_SRC)ft_change.c $(PATH_SRC)ft_define.c $(PATH_SRC)ft_file.c \
	  $(PATH_SRC)ft_inputs.c $(PATH_SRC)ft_len.c $(PATH_SRC)ft_new_map.c \
	  $(PATH_SRC)ft_solve.c $(PATH_SRC)ft_stdio.c $(PATH_SRC)main.c 
OBJ = ft_change.o ft_define.o ft_file.o ft_inputs.o ft_len.o ft_new_map.o \
	  ft_solve.o ft_stdio.o main.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c -I $(HEADERS) $(SRC) 
	gcc $(FLAG) -I $(HEADERS) $(OBJ) -L. -l$(LIBRARY) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
