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
    env_var_t *current = *env_list;

    if (new_var == NULL) {
        my_put_stderr("Failed to create environment variable");
        return;
    }
    if (*env_list == NULL) {
        *env_list = new_var;
    } else {
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_var;
    }
}

void update_env_var(env_var_t *var, const char *value)
{
    free(var->value);
    var->value = my_strdup(value);
    if (var->value == NULL) {
        perror("strdup");
        exit(EXIT_FAILURE);
    }
}

env_var_t *find_env_var(const char *name, env_var_t *env_list)
{
    env_var_t *current = env_list;

    while (current != NULL) {
        if (my_strcmp(current->name, name) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void free_env_vars(env_var_t *env_list)
{
    env_var_t *temp = env_list;

    while (env_list != NULL) {
        env_list = env_list->next;
        free(temp->name);
        free(temp->value);
        free(temp);
    }
}
