/*
** EPITECH PROJECT, 2023
** my_printf.c
** File description:
** Function that will print every sort of flag in the system
** function printf
*/

#include "./include/my.h"
#include "./include/bebou.h"
#include <stddef.h>
#include <stdio.h>

int go_threw(va_list *list, const char *ptr)
{
    for (int i = 0; ptr_fonction[i].ptr != NULL; i++) {
        if (ptr_fonction[i].flag == ptr[0]) {
            ptr_fonction[i].ptr(list);
        }
    }
    return -1;
}

int my_printf(const char *format, ...)
{
    int cpt = 0;
    va_list list;

    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            go_threw(&list, &format[i + 1]);
            i++;
        } else
            my_putchar(format[i]);
    }
    va_end(list);
    return cpt;
}
