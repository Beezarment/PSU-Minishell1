/*
** EPITECH PROJECT, 2023
** my_revstr
** File description:
** Write a function that reverses a string.
*/

#include <unistd.h>
#include <stdio.h>
#include "include/my_lib.h"

char *my_revstr(char *str)
{
    int i = 0;
    int len = my_strlen(str) - 1;
    int half = my_strlen(str) / 2;
    char c;

    while (i < half) {
        c = str[i];
        str[i] = str[len - i];
        str[len - i] = c;
        i = i + 1;
    }
    return (str);
}
