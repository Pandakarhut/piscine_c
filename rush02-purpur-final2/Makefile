NAME = colle-2
PATH_SRC = ./src/
HEADER = ./include/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = $(PATH_SRC)ft_verify_character.c $(PATH_SRC)rush00.c \
	  $(PATH_SRC)rush01.c $(PATH_SRC)rush02.c $(PATH_SRC)rush03.c \
	  $(PATH_SRC)rush04.c $(PATH_SRC)colle2.c $(PATH_SRC)ft_columns.c \
	  $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putnbr.c $(PATH_SRC)ft_putstr.c \
	  $(PATH_SRC)ft_rows.c
OBJ = ft_verify_character.o rush00.o rush01.o rush02.o rush03.o rush04.o colle2.o \
	  ft_columns.o ft_putchar.o ft_putnbr.o ft_putstr.o ft_rows.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	gcc $(FLAG) -I $(HEADER) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all