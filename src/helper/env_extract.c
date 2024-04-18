/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell1-armand.dufresne
** File description:
** env_extract.c
*/

#include "../../includes/my.h"
#include "../../includes/struct.h"
#include "../../lib/my/include/my_lib.h"

void extract_env(const char *env, char **name, char **value)
{
    int i = 0;

    for (; env[i] != '='; i += 1);
    *name = strndup(env, i);
    *value = strdup(&env[i + 1]);
}

void add_env(const char *name, const char *value, env_var_t **env)
{
    if (name != NULL && value != NULL) {
        add_env_var(name, value, env);
    }
}

void env_init(char **env, env_var_t **env_list)
{
    char **env_ptr = env;
    char *name = NULL;
    char *value = NULL;

    while (*env_ptr != NULL) {
        free(name);
        extract_env(*env_ptr, &name, &value);
        add_env(name, value, env_list);
        env_ptr += 1;
    }
}
