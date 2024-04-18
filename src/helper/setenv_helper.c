/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell2-armand.dufresne
** File description:
** setenv_hekper.c
*/

#include "../../includes/my.h"
#include "../../includes/struct.h"
#include "../../lib/my/include/my_lib.h"

env_var_t *find_env_var(env_var_t *find, char const *name)
{
    while (find != NULL) {
        if (my_strcmp(name, find->name) == 0) {
            return find;
        } else {
            find = find->next;
        }
    }
    return NULL;
}

void update_env_var(env_var_t *env, char const *value)
{
    if (value != NULL) {
        free(env->value);
        env->value = strdup(value);
    }
}

env_var_t *create_new_env_var(char const *name, char const *value)
{
    env_var_t *new = malloc(sizeof(env_var_t));

    new->next = NULL;
    new->name = strdup(name);
    new->value = strdup(value);
    return new;
}

void append_env_var(env_var_t **l, env_var_t *new)
{
    env_var_t *tmp = *l;

    if (*l == NULL) {
        *l = new;
        return;
    }
    while (tmp->next != NULL) {
        tmp = tmp->next;
        new->next = NULL;
    }
    tmp->next = new;
}
