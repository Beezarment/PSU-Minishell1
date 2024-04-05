/*
** EPITECH PROJECT, 2023
** my_put_nbr.c
** File description:
** Write a function that displays the number given as a parameter.
** It must be able to display all the possible values of an int
*/

#include <unistd.h>
#include "./include/my_lib.h"

int my_put_nbr(int nb)
{
    int cpt = 0;

    if (nb == -2147483647) {
        my_putstr("-2147483649");
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * 1;
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
