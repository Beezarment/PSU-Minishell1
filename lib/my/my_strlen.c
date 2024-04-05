/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** Write a function that counts and returns the number
** of characters found in the string passed as parameter.
*/

#include <string.h>

int my_strlen(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        index += 1;
    }
    return (index);
}
