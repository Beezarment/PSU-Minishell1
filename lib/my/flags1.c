/*
** EPITECH PROJECT, 2023
** flags1.c
** File description:
** display first flags
*/

#include "my.h"
#include "bebou.h"
#include "my_lib.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int digita(va_list *arg)
{
    int digit = va_arg(*arg, int);

    my_put_nbr(digit);
    return digit;
}

int characa(va_list *arg)
{
    char charac = (char) va_arg(*arg, int);

    my_putchar(charac);
    return charac;
}

int pointa(va_list *arg)
{
    unsigned int ptr = va_arg(*arg, unsigned int);

    my_putchar('0');
    my_putchar('x');
    my_hexa_min(ptr);
    return ptr;
}

int chaina(va_list *arg)
{
    char *str = va_arg(*arg, char *);

    return my_putstr(str);
}

int octa(va_list *arg)
{
    int octal = va_arg(*arg, int);

    my_octal(octal);
    return octal;
}
