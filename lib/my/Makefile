##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## My make file, MINE
## 

SRC	=	my_strlen.c		\
		my_putchar.c		\
		my_putstr.c		\
		my_getnbr.c		\
		my_put_nbr.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-c -I..

CC	=	gcc

NAME	=	libmy.a

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(SRC); ar rc $(NAME) $(OBJ)
		cp libmy.a ../

all:		$(NAME)

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

re:		fclean all
