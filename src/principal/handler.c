/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell1-armand.dufresne
** File description:
** handler.c
*/

#include "../../includes/my.h"
#include "../../includes/struct.h"
#include "../../lib/my/include/my_lib.h"

void handle_cd_command(char **arguments)
{
    if (arguments[0] == NULL)
        return;
    if (my_strcmp(arguments[0], "cd") == 0)
        change_directory(arguments);
}

void handle_exit_command(char **arguments)
{
    if (arguments[0] == NULL)
        return;
    if (my_strcmp(arguments[0], "exit") == 0)
        exit_shell();
}

void handle_setenv_command(char **arguments, env_var_t **env_list)
{
    if (arguments == NULL || env_list == NULL || arguments[0] == NULL)
        return;
    if (my_strcmp(arguments[0], "setenv") == 0) {
        if (arguments[1] != NULL && arguments[2] != NULL) {
            my_setenv(env_list, arguments[1], arguments[2]);
        } else {
            printf("Usage: setenv <name> <value>\n");
        }
    }
}

void handle_unsetenv_command(char **arguments, env_var_t **env_list)
{
    if (arguments == NULL || env_list == NULL || arguments[0] == NULL)
        return;
    if (my_strcmp(arguments[0], "unsetenv") == 0) {
        if (arguments[1] != NULL) {
            my_unsetenv(env_list, arguments[1]);
        } else {
            printf("Usage: unsetenv <name>\n");
        }
    }
}

void handle_env_command(char **arguments, env_var_t **env_list)
{
    if (arguments[0] == NULL || env_list == NULL)
        return;
    if (my_strcmp(arguments[0], "env") == 0)
        my_env(*env_list);
}
