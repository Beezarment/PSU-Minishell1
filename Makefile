##
## EPITECH PROJECT, 2023
## PSU
## File description:
## Makefile
##

NAME    =  	mysh

SRC     =	./src/main.c						\
			./src/error.c						\
			./src/builtins/my_env.c				\
			./src/builtins/handler.c 			\
			./src/builtins/execute.c			\
			./src/builtins/my_setenv.c			\
			./src/builtins/directory.c			\
			./src/builtins/execute_helper.c		\
			./src/builtins/my_setenv_helper.c	\

FCLEAN_TARGETS = $(NAME) ./lib/libmy.a

CFLAGS  =  	-W -Wall -Wextra

OBJ     =	$(SRC:.c=.o)

all	:	$(OBJ) build_lib
		gcc $(OBJ) -o $(NAME) -g -I./includes -L./lib -lmy $(CFLAGS)

build_lib	:
		make -C ./lib/my

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(FCLEAN_TARGETS)
	make -C ./lib/my fclean

re: fclean all

.PHONY:	clean fclean re all
