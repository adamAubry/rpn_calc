NAME = polcalc

SRC = ./src/main.c

all : $(NAME)

.PHONY : clean fclean re
clean :
	/bin/rm -f *.o .*.swp

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all

$(NAME) :
	gcc -o $(NAME) $(SRC)


