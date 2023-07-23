# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pruenrua <pruenrua@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/17 05:33:12 by root              #+#    #+#              #
#    Updated: 2023/07/23 22:34:33 by pruenrua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Werror -Wextra 

SRC = util.c util2_lst.c util3_split.c util4_atoi.c \
	argument_check.c init_dup_checker.c arg_check_util.c av_joiner.c \
	free_and_error.c pre_sort.c operation.c sort.c radix.c push_swap.c  

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