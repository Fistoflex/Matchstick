##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Compile my bootstrap
##

SRC	=	./main.c		\
		./create_map.c		\
		./disp_map.c		\
		./count_matches.c	\
		./remove_matches.c	\
		./disp_end.c		\
		./player_play.c		\
		./check_nbrs.c		\
		./matchstick.c		\
		./check_map.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -I./include -g

LDFLAGS =    	-L ./lib/ -lmy

CC	=	gcc

NAME	=	matchstick

all:		$(NAME)

$(NAME):	$(OBJ)
		make -sC ./lib/my/
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) -g

clean:
		rm -rf $(OBJ)
		make -sC ./lib/my/ clean

fclean:		clean
		rm -rf $(NAME)
		make -sC ./lib/my/ fclean

re:		fclean all
