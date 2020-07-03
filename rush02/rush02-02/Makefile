NAME = colle-2
PATH_SRC = ./src/
HEADER = ./include/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
SRC = $(PATH_SRC)ft_verify_character.c $(PATH_SRC)rush00.c \
	  $(PATH_SRC)rush01.c $(PATH_SRC)rush02.c $(PATH_SRC)rush03.c \
	  $(PATH_SRC)rush04.c $(PATH_SRC)colle2.c
OBJ = ft_verify_character.o rush00.o rush01.o rush02.o rush03.o rush04.o colle2.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	gcc $(FLAG) -I $(HEADER) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all