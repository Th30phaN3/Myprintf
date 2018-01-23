RM	= rm -f

NAME	= libmy.a

DIR	= ./src/

SRC	=	$(DIR)error.c		\
		$(DIR)func.c		\
		$(DIR)my_printf.c	\
		$(DIR)put.c		\
		$(DIR)putnbr2.c		\
		$(DIR)putnbr.c		\
		$(DIR)putstr.c		\
		$(DIR)short.c

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc ./lib/$(NAME) $(OBJ)
	ranlib ./lib/$(NAME)
	cp ./lib/$(NAME) .

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) ./lib/$(NAME)

re: fclean all

.PHONY: all clean fclean re
