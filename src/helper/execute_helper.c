/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell1-armand.dufresne
** File description:
** execute_helper.c
*/

#include "../../includes/my.h"
#include "../../lib/my/include/my_lib.h"


char *get_path_environment(void)
{
    char *path_env = my_getenv("PATH");

    if (path_env == NULL) {
        path_env = "/usr/bin:/bin";
    }
    return path_env;
}

char *find_command_in_directory(const char *directory, const char *command)
{
    char *command_path;
    int directory_length = my_strlen(directory);
    int command_length = my_strlen(command);

    command_path = malloc(directory_length + command_length + 2);
    if (command_path == NULL) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    my_strcpy(command_path, directory);
    command_path[directory_length] = '/';
    my_strcpy(command_path + directory_length + 1, command);
    command_path[directory_length + command_length + 1] = '\0';
    if (access(command_path, X_OK) == 0) {
        return command_path;
    } else {
        free(command_path);
        return NULL;
    }
}

char *find_command_path(const char *command)
{
    char *path_env = get_path_environment();
    char *path_copy = my_strdup(path_env);
    char *part = strtok(path_copy, ":");
    char *command_path;

    if (path_copy == NULL) {
        perror("strdup");
        exit(EXIT_FAILURE);
    }
    while (part != NULL) {
        command_path = find_command_in_directory(part, command);
        if (command_path != NULL) {
            free(path_copy);
            return command_path;
        }
        part = strtok(NULL, ":");
    }
    free(path_copy);
    return NULL;
}

pid_t create_child_process(void)
{
    pid_t pid = fork();

    if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    return pid;
}

void exec_command(char **arguments)
{
    if (execve(arguments[0], arguments, NULL) < 0) {
        perror("execve");
        exit(EXIT_FAILURE);
    }
}
