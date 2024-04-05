/*
** EPITECH PROJECT, 2023
** my_hexa_maj.c
** File description:
** does the %X of printf
*/

#include <unistd.h>
#include "my_lib.h"

int my_hexa_maj(unsigned int nb)
{
    int cpt = 0;
    char *letters;

    letters = "0123456789ABCDEF";
    if (nb < 16) {
        my_putchar(letters[nb % 16]);
    } else {
        cpt += my_hexa_maj(nb / 16);
        nb = nb % 16;
        my_putchar(letters[nb % 16]);
        cpt += 1;
    }
    return cpt;
}
