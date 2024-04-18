##
## EPITECH PROJECT, 2023
## PSU
## File description:
## Makefile
##

NAME    =  	mysh

SRC     =	./src/main.c						\
			./src/error.c						\
			./src/principal/my_env.c			\
			./src/principal/handler.c 			\
			./src/principal/execute.c			\
			./src/helper/env_helper.c			\
			./src/helper/env_extract.c			\
			./src/principal/my_setenv.c			\
			./src/principal/directory.c			\
			./src/helper/setenv_helper.c 		\
			./src/principal/my_unsetenv.c       \
			./src/helper/execute_helper.c		\

FCLEAN_TARGETS = $(NAME) ./lib/libmy.a

CFLAGS  =  	-W -Wall -Wextra -g

OBJ     =	$(SRC:.c=.o)

all	:	$(OBJ) build_lib
		gcc $(OBJ) -o $(NAME) -I./includes -L./lib -lmy $(CFLAGS)

debug: build_lib
	gcc -o $(NAME) $(SRC) -I ./includes -L./lib -lmy $(CFLAGS) -ggdb3

build_lib	:
		make -C ./lib/my

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(FCLEAN_TARGETS)
	make -C ./lib/my fclean

re: fclean all

.PHONY:	clean fclean re all
