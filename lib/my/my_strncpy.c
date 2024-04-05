/*
** EPITECH PROJECT, 2023
** my_strncpy.c
** File description:
** Write a function that copies n characters from a
** string into another.The destination string will
** already have enough memory to contain n characters
*/

#include <string.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i += 1) {
        dest[i] = src[i];
    }
    return dest;
}
