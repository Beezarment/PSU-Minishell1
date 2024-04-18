/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell1-armand.dufresne
** File description:
** directory.c
*/

#include "../../includes/my.h"

void change_directory(char **arguments)
{
    if (arguments[1] == NULL) {
        my_put_stderr("Argument not available\n");
    } else {
        chdir(arguments[1]);
    }
}
