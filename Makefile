# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/08 14:03:38 by pruenrua          #+#    #+#              #
#    Updated: 2023/06/22 18:06:03 by pruenrua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = push_swap.c checker.c error.c init.c tool.c ft_split.c ft_atoi.c free.c check.c int_to_bit.c

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