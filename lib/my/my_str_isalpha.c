/*
** EPITECH PROJECT, 2023
** my_str_isalpha.c
** File description:
** function that returns 1 if the string passed as
** parameter only contains alphabetical characters and 0
** if the string contains another type of character.
*/

#include <stdio.h>

int my_str_isalpha(char const *str)
{
    int n = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
            return (1);
        else
            return 0;
    }
    return n;
}
