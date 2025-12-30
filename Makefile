NAME = push_swap
CC = gcc
CFLAGS = -Wextra -Werror -Wall
RM = rm -f

SRC = parsing.c parsing_utils.c swap.c push.c rotate.c rev_rotate.c main.c \
		utils.c sort_small.c
OBJ = $(SRC:.c=.o)

all :	$(NAME) push_swap.h

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o : %.c
		$(CC) $(CFLAGS) -c $<

clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY:	fclean clean all re
