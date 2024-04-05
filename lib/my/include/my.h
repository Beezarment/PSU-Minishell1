/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my_printf functions
*/

#include <stdarg.h>

#ifndef MY_H
    #define MY_H

int digita(va_list *arg);
int characa(va_list *arg);
int chaina(va_list *arg);
int octa(va_list *arg);
int hexa(va_list *arg);
int hexe(va_list *arg);
int pointa(va_list *arg);
int flota(va_list *arg);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_hexa_min(unsigned int);
int my_hexa_maj(unsigned int);
int my_octal(int nb);
int my_deci(unsigned int nb);
void my_putchar(char c);
int my_put_nbr(int nb);
void flag_f(double nb);
void my_put_unsigned(unsigned int nb);

#endif
