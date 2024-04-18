/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell1-armand.dufresne
** File description:
** my_setenv.c
*/

#include "../../includes/my.h"
#include "../../includes/struct.h"
#include "../../lib/my/include/my_lib.h"

env_var_t *create_env_var(const char *name, const char *value)
{
    env_var_t *new_var = malloc(sizeof(env_var_t));
    if (new_var == NULL) {
        perror("malloc");
        return NULL;
    }
    new_var->name = my_strdup(name);
    if (new_var->name == NULL) {
        perror("strdup");
        free(new_var);
        return NULL;
    }
    new_var->value = my_strdup(value);
    if (new_var->value == NULL) {
        perror("strdup");
        free(new_var->name);
        free(new_var);
        return NULL;
    }
    new_var->next = NULL;
    return new_var;
}

void add_env_var(const char *name, const char *value, env_var_t **env_list)
{
    env_var_t *new_var = create_env_var(name, value);
    env_var_t *current;

    if (new_var == NULL) {
        my_put_stderr("Failed to create environment variable");
        return;
    }
    if (*env_list == NULL) {
        *env_list = new_var;
    } else {
        current = *env_list;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_var;
    }
}

void free_env_vars(env_var_t *env_list)
{
    env_var_t *temp;

    while (env_list != NULL) {
        temp = env_list;
        env_list = env_list->next;
        free(temp->name);
        free(temp->value);
        free(temp);
    }
}
