NAME = push_swap

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = push_swap.c checker.c error.c

OBJ = $(SRC:.c=.o)

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all re clean fclean