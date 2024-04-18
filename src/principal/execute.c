/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell1-armand.dufresne
** File description:
** execute.c
*/

#include "../../includes/my.h"
#include "../../lib/my/include/my_lib.h"


char *my_getenv(const char *name)
{
    extern char **environ;
    size_t name_len = my_strlen(name);

    for (int i = 0; environ[i] != NULL; i++) {
        if (my_strncmp(environ[i], name, name_len) == 0 &&
            environ[i][name_len] == '=') {
            return environ[i] + name_len + 1;
        }
    }
    return NULL;
}

void execute_command(char **arguments)
{
    char *command_path = find_command_path(arguments[0]);
    pid_t pid;
    int status;

    if (command_path == NULL) {
        my_put_stderr("Command not available\n");
        return;
    }
    pid = create_child_process();
    arguments[0] = command_path;
    if (pid == 0) {
        exec_command(arguments);
    } else {
        if (waitpid(pid, &status, 0) == -1) {
            perror("waitpid");
            exit(EXIT_FAILURE);
        }
    }
}

void handle_default_command(char **arguments)
{
    if (arguments[0] == NULL)
        return;
    if (!(my_strcmp(arguments[0], "cd") == 0 ||
        my_strcmp(arguments[0], "exit") == 0 ||
        my_strcmp(arguments[0], "setenv") == 0 ||
        my_strcmp(arguments[0], "unsetenv") == 0 ||
        my_strcmp(arguments[0], "env") == 0))
        execute_command(arguments);
}
