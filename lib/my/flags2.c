/*
** EPITECH PROJECT, 2023
** flags2.c
** File description:
** rest of the printf flags
*/

#include "my.h"
#include "my_lib.h"
#include "bebou.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int deca(va_list *arg)
{
    int deci = va_arg(*arg, unsigned int);

    my_deci(deci);
    return deci;
}

int hexe(va_list *arg)
{
    int hexo = va_arg(*arg, long int);

    my_hexa_min(hexo);
    return hexo;
}

int hexa(va_list *arg)
{
    int hexi = va_arg(*arg, long int);

    my_hexa_maj(hexi);
    return hexi;
}

int flota(va_list *arg)
{
    double floato = va_arg(*arg, double);

    flag_f(floato);
    return floato;
}
