NAME    = libftprintf.a
CFLAGS  = -Wall -Wextra -Werror
CC = cc
SRC = \
	ft_printf.c\
	handler.c\
	ft_itoa.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_itou.c\
	ft_itop.c\
	ft_itox.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
