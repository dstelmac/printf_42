NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f 

src = ft_printf.c \
		
OBJ = $(SRC:.c=.o)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:
			$(RM) $(OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re




































