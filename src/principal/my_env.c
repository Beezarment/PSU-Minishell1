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
    if (env_list == NULL) {
        my_printf("Environment list is empty.\n");
        return 84;
    }
    for (; env_list != NULL; env_list = env_list->next) {
        printf("%s=%s\n", env_list->name, env_list->value);
    }
    return 0;
}
