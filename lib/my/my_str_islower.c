/*
** EPITECH PROJECT, 2023
** my_str_islower.c
** File description:
** hd
*/

#include <stdio.h>
#include "./include/my_lib.h"

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_printf("%d\n", str[i]);
        if ((str[i] < 96) || (str[i] > 123)) {
            return (0);
        }
    }
    return (1);
}
