# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/08 14:03:38 by pruenrua          #+#    #+#              #
#    Updated: 2023/06/25 21:47:31 by pruenrua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = push_swap.c checker.c error.c init.c tool.c ft_split.c ft_atoi.c free.c ft_calloc.c check.c sort.c

OBJ = $(SRC:.c=.o)

RM = rm -f

all : $(NAME) clean

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all clean

.PHONY : all re clean fclean