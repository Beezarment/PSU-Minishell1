/*
** EPITECH PROJECT, 2023
** my_strncat.c
** File description:
** Write a function that concatenates n characters of
** the src string to the end of the dest string.
*/

#include <stdio.h>

char *my_strncat(char *dest, char const *src, int nb)
{
    int a = 0;
    int length = 0;

    while (dest[length] != '\0') {
        length = length + 1;
    }
    while (a < nb || src[a] != '\0') {
        dest[length + a] = src[a];
        a = a + 1;
    }
    return dest;
}
