##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Compile my bootstrap
##

SRC		=	./ai_play.c		\
			./create_map.c		\
			./disp_map.c		\
			./count_matches.c	\
			./remove_matches.c	\
			./disp_end.c		\
			./player_play.c		\
			./check_nbrs.c		\
			./matchstick.c		\
			./check_map.c

SRC_MAIN	=	./main.c

OBJ		=	$(SRC:.c=.o)

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

CFLAGS		=	-W -I./include -g -Wextra -Wall

TFLAGS		=	--coverage -lcriterion

LDFLAGS 	=    	-L ./lib/ -lmy

CC		=	gcc

NAME		=	matchstick

BIN		=	unit_tests

TEST		=	tests/tests.c

INC		=	-Iinclude

all:		$(NAME)

$(NAME):	$(OBJ) $(OBJ_MAIN)
		make -sC ./lib/my/
		$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(LDFLAGS) -g

tests_tun:
		$(CC) -o $(BIN) $(SRC) $(TEST) $(INC) $(LDFLAGS) $(TFLAGS)
		./$(BIN)

clean:
		rm -rf $(OBJ)
		rm -rf $(OBJ_MAIN)
		make -sC ./lib/my/ clean

fclean:		clean
		rm -rf $(NAME)
		rm -rf $(BIN)
		make -sC ./lib/my/ fclean

re:		fclean all
