##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Write a Makefile that compiles your libmy.a
##

SRC     =	my_compute_square_root.c	\
			flag_f.c					\
			my_put_unsigned.c			\
			my_octal.c					\
			my_deci.c					\
			flags1.c					\
			flags2.c					\
			my_printf.c					\
			my_hexa_min.c				\
			my_putstr.c					\
			my_sort_int_array.c			\
			my_strcpy.c					\
			my_str_isprintable.c		\
			my_strncat.c				\
			my_strupcase.c				\
        	my_find_prime_sup.c			\
			my_isneg.c					\
			my_revstr.c					\
			my_strcapitalize.c			\
			my_str_isalpha.c			\
			my_str_isupper.c			\
			my_strncmp.c				\
			my_swap.c					\
			my_getnbr.c					\
			my_is_prime.c				\
			my_putchar.c				\
			my_showmem.c				\
			my_strcat.c					\
			my_str_islower.c			\
			my_strlen.c					\
			my_strncpy.c				\
			my_compute_power_rec.c		\
			my_hexa_maj.c				\
			my_nbr_base.c				\
			my_put_nbr.c				\
			my_showstr.c				\
			my_strcmp.c					\
			my_str_isnum.c				\
			my_strlowcase.c				\
			my_strstr.c					\
			my_strdup.c					\

OBJ     =       $(SRC:.c=.o)

NAME    =       ../libmy.a

CFLAGS  =       -Wall -Wextra

CPPFLAGS        =       -I./include

CC      =       gcc

all:    $(NAME)

$(NAME):        $(OBJ)
	ar rc $(NAME) $(OBJ)
	mkdir -p include

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY:	clean fclean re all
