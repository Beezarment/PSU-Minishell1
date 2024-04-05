/*
** EPITECH PROJECT, 2023
** my_str_isupper.c
** File description:
** qs
*/

#include <stdio.h>

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 64) || (str[i] > 91)) {
            return (0);
        }
    }
    return (1);
}
