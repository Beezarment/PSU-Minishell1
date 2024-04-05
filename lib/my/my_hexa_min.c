/*
** EPITECH PROJECT, 2023
** my_hexa_min.c
** File description:
** does the %x of printf
*/

#include <unistd.h>
#include "my_lib.h"

int my_hexa_min(unsigned int nb)
{
    int cpt = 0;
    char *letters;

    letters = "0123456789abcdef";
    if (nb < 16) {
        my_putchar(letters[nb % 16]);
    } else {
        cpt += my_hexa_min(nb / 16);
        nb = nb % 16;
        my_putchar(letters[nb % 16]);
        cpt += 1;
    }
    return cpt;
}
