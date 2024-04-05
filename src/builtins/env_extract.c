/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell1-armand.dufresne
** File description:
** env_extract.c
*/

#include "../../includes/my.h"
#include "../../includes/struct.h"

void extract_env(const char *env, char **name, char **value)
{
    const char *equal = env;
    size_t name_length;

    for (; *equal != '\0' && *equal != '='; equal += 1) {
        if (*equal == '=') {
            name_length = equal - env;
            *name = malloc(name_length + 1);
            my_strncpy(*name, env, name_length);
            (*name)[name_length] = '\0';
            *value = my_strdup(equal + 1);
        } else {
            *name = NULL;
            *value = NULL;
        }
    }
}

void add_env(const char *name, const char *value, env_var_t **env)
{
    if (name != NULL && value != NULL) {
       add_env_var(name, value, env);
    }
}

void init(char **env, env_var_t *env_list)
{
    char **env_ptr = env;
    char *name;
    char *value;

    while (*env_ptr != NULL) {
        free(name);
        extract_env(*env_ptr, &name, &value);
        add_env(name, value, env_list);
        env_ptr += 1;
    }
}