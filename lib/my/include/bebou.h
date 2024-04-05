/*
** EPITECH PROJECT, 2023
** bebou.h
** File description:
** my_printf functions
*/

#include "my.h"
#include <stdarg.h>
#include <stddef.h>

#ifndef BEBOU
    #define BEBOU
typedef struct {
    char flag;
    int (*ptr)(va_list *arg);
} flag_t;


int digita(va_list *arg);
int characa(va_list *arg);
int chaina(va_list *arg);
int octa(va_list *arg);
int hexa(va_list *arg);
int hexe(va_list *arg);
int pointa(va_list *arg);
int flota(va_list *arg);
int my_hexa_min(unsigned int nb);
int my_hexa_maj(unsigned int nb);
int my_deci(unsigned int);
int my_octal(int nb);
void my_putchar(char c);
int my_put_nbr(int nb);
void flag_f(double nb);
void my_put_unsigned(unsigned int nb);

static const flag_t ptr_fonction[] = {
    {.flag = 'd', .ptr = &digita},
    {.flag = 'c', .ptr = &characa},
    {.flag = 's', .ptr = &chaina},
    {.flag = 'i', .ptr = &digita},
    {.flag = 'p', .ptr = &pointa},
    {.flag = '%', .ptr = &characa},
    {.flag = 'o', .ptr = &octa},
    {.flag = 'u', .ptr = &digita},
    {.flag = 'x', .ptr = &hexe},
    {.flag = 'X', .ptr = &hexa},
    {.flag = 'f', .ptr = &flota},
    {.flag = '\0', .ptr = NULL}
};

#endif
