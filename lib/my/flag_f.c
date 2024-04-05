/*
** EPITECH PROJECT, 2023
** flag_f
** File description:
** float
*/

#include <unistd.h>
#include <stdio.h>
#include "my_lib.h"
#include "bebou.h"
#include "my.h"

void flag_f(double nb)
{
    int prec = 6;
    int inte = (int)nb;
    double dec = nb - inte;
    int rounddigit = (int)(dec);

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    my_put_unsigned(inte);
    my_putchar('.');
    for (int i = 0; i < prec; i++) {
        dec *= 10;
    }
    rounddigit = (int)(dec + 0.5);
    my_put_unsigned(rounddigit);
}
