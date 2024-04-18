/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell1-armand.dufresne
** File description:
** my_setenv.c
*/
#include "../../includes/my.h"
#include "../../lib/my/include/my_lib.h"

void my_setenv(env_var_t **env_list, char const *name, char const *value)
{
    env_var_t *new_var;
    env_var_t *existing_var = find_env_var(*env_list, name);

    if (name != NULL && value == NULL) {
        my_put_stderr("you need to put a value");
    }
    if (existing_var != NULL) {
        update_env_var(existing_var, value);
    } else {
        new_var = create_new_env_var(name, value);
        append_env_var(env_list, new_var);
    }
}
