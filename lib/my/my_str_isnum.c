/*
** EPITECH PROJECT, 2023
** my_str_isnum.c
** File description:
** dz
*/

#include <stdio.h>

int my_str_isnum(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] <= 47) || (str[i] >= 58)){
            return (0);
        }
    }
    return (1);
}
