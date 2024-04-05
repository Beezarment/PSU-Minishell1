/*
** EPITECH PROJECT, 2023
** my_strcat.c
** File description:
** Write a function that concatenates two strings.
*/

#include <unistd.h>
#include <stdio.h>

char *my_strcat(char *dest, char const *src)
{
    int a = 0;
    int length = 0;

    while (dest[length] != '\0') {
        length = length + 1;
    }
    while (src[a] != '\0') {
        dest[length + a] = src[a];
        a = a + 1;
    }
    return dest;
}
