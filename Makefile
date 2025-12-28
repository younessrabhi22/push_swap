# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/25 13:02:27 by yrabhi            #+#    #+#              #
#    Updated: 2025/12/28 14:44:00 by yrabhi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGC = -Wextra -Werror -Wall
RM = rm -f

SRC = parsing.c parsing_utils.c swap.c push.c rotate.c rev_rotate.c main.c
OBJ = $(SRC:.c=.o)

all :	$(NAME) push_swap.h

$(NAME) : $(OBJ)
		$(CC) $(CFLAGC) $(OBJ) -o $(NAME)

%.o : %.c
		$(CC) $(CFLAGC) -c $<

clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY:	fclean clean all re
