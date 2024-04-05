/*
** EPITECH PROJECT, 2023
** my_put_unsigned
** File description:
** pos
*/

#include "my.h"
#include "bebou.h"
#include "my_lib.h"

void my_put_unsigned(unsigned int nb)
{
    if (nb == 0) {
        my_putchar('0');
        return;
    }
    if (nb >= 10) {
        my_put_unsigned(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}
