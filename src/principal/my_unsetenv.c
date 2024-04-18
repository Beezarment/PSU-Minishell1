/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell2-armand.dufresne
** File description:
** my_unsetenv.c
*/

#include "../../includes/my.h"
#include "../../lib/my/include/my_lib.h"

void remove_env_var_node(env_var_t **list, env_var_t *current, env_var_t *prev)
{
    if (prev == NULL) {
        *list = current->next;
    } else {
        prev->next = current->next;
    }
    free(current->name);
    free(current->value);
    free(current);
}

void my_unsetenv(env_var_t **env_list, char const *name)
{
    env_var_t *current = *env_list;
    env_var_t *previous = NULL;

    if (env_list == NULL || name == NULL)
        return;
    while (current != NULL) {
        if (my_strcmp(current->name, name) == 0) {
            remove_env_var_node(env_list, current, previous);
            return;
        }
        previous = current;
        current = current->next;
    }
}
