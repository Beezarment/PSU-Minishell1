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
    if (my_strcmp(arguments[0], "cd") == 0)
        change_directory(arguments);
}

void handle_exit_command(char **arguments)
{
    if (my_strcmp(arguments[0], "exit") == 0)
        exit_shell();
}

void handle_setenv_command(char **arguments, env_var_t **env_list_ptr)
{
    int overwrite = 1;

    if (strcmp(arguments[0], "setenv") == 0) {
        if (arguments[1] != NULL && arguments[2] != NULL) {
            my_setenv(arguments[1], arguments[2], overwrite, env_list_ptr);
        } else {
            printf("Usage: setenv <name> <value>\n");
        }
    }
}

void handle_env_command(char **arguments, env_var_t *env_list)
{
    if (my_strcmp(arguments[0], "env") == 0)
        my_env(env_list);
}

void handle_default_command(char **arguments)
{
    if (!(my_strcmp(arguments[0], "cd") == 0 ||
        my_strcmp(arguments[0], "exit") == 0 ||
        my_strcmp(arguments[0], "setenv") == 0 ||
        my_strcmp(arguments[0], "env") == 0))
        execute_command(arguments);
}
