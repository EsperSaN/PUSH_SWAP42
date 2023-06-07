NAME = push_swap

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = push_swap.c checker.c error.c praser.c tool.c ft_strjoin.c

OBJ = $(SRC:.c=.o)

RM = rm -f

all : $(NAME) clean

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all re clean fclean