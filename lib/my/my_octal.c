/*
** EPITECH PROJECT, 2023
** my_octal.c
** File description:
** does a my_put_nbr but modulo 8
*/

#include <unistd.h>
#include "my_lib.h"

int my_octal(int nb)
{
    int cpt = 0;

    if (nb < 0) {
        return 84;
    }
    if (nb > 7) {
        cpt += my_put_nbr(nb / 8);
        nb = nb % 8;
        my_putchar(nb + 48);
        cpt += 1;
    } else {
        my_putchar(nb + 48);
        cpt += 1;
    }
    return cpt;
}
