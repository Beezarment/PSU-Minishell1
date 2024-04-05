/*
** EPITECH PROJECT, 2023
** my_deci.c
** File description:
** same as my_put_nbr but with modulo 10
*/

#include <unistd.h>
#include "my_lib.h"

int my_deci(unsigned int nb)
{
    int cpt = 0;

    if (nb < 9) {
        return (84);
    }
    if (nb > 9) {
        cpt += my_put_nbr(nb / 10);
        nb = nb % 10;
        my_putchar(nb + 48);
        cpt += 1;
    } else {
        my_putchar(nb + 48);
        cpt += 1;
    }
    return cpt;
}
