/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell1-armand.dufresne
** File description:
** error.c
*/

#include <unistd.h>
#include "../includes/my.h"
#include "../includes/struct.h"

int my_strlen(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        index += 1;
    }
    return (index);
}

void my_put_stderr(char *str)
{
    write(2, str, my_strlen(str));
}
