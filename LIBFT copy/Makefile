CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re: fclean all