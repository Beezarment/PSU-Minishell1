/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell1-armand.dufresne
** File description:
** my_setenv.c
*/
#include "../../includes/my.h"

int my_setenv(const char *name, const char *value, int write, env_var_t **env)
{
    env_var_t *existing_var = find_env_var(name, *env);

    if (existing_var != NULL) {
        if (write) {
            free(existing_var->value);
            existing_var->value = my_strdup(value);
            if (existing_var->value == NULL) {
                perror("strdup");
                return -1;
            }
        } else {
            return -1;
        }
    } else {
        add_env_var(name, value, env);
    }
    return 0;
}