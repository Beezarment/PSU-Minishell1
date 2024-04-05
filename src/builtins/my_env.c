/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell1-armand.dufresne
** File description:
** my_env.c
*/

#include <stddef.h>
#include "../../includes/my.h"
#include "../../lib/my/include/my_lib.h"

int my_env(env_var_t *env_list)
{
    env_var_t *current = env_list;

    if (current == NULL) {
        my_printf("Environment list is empty.\n");
        return 84;
    }
    while (current != NULL) {
        my_printf("%s=%s\n", current->name, current->value);
        current = current->next;
    }
    return 0;
}