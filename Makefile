# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabhi <yrabhi@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/25 13:02:27 by yrabhi            #+#    #+#              #
#    Updated: 2025/12/25 13:02:37 by yrabhi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CC = gcc
CFLAGC = -Wextra -Werror -Wall
AR = ar rsc
RM = rm -f

SRC = push_swap.c parsing.c utils.c
OBJ = $(SRC:.c=.o)


all :	$(NAME) push_swap.h

$(NAME) : $(OBJ)
		$(AR) $(NAME) $(OBJ)

%.o : %.c
		$(CC) $(CFLAGC) -c $<

clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY:	fclean clean all re
