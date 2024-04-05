/*
** EPITECH PROJECT, 2023
** PSU
** File description:
** main.c
*/

#include "../includes/my.h"
#include "../lib/my/include/my_lib.h"
#include "../includes/struct.h"

char *read_line(void)
{
    char *line = NULL;
    size_t bufsize = 0;

    getline(&line, &bufsize, stdin);
    return line;
}

char **parse_line(char *line)
{
    char *delim;
    int i = 0;
    char **arguments = malloc(MAX_ARGUMENTS * sizeof(char *));

    if (!arguments) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    delim = strtok(line, " \t\r\n\a");
    while (delim != NULL) {
        arguments[i] = delim;
        i ++;
        delim = strtok(NULL, " \t\r\n\a");
    }
    arguments[i] = NULL;
    return arguments;
}

void exit_shell(void)
{
    exit(EXIT_SUCCESS);
}

int program(char **arguments, env_var_t *env_list)
{
    handle_cd_command(arguments);
    handle_exit_command(arguments);
    handle_setenv_command(arguments, &env_list);
    handle_env_command(arguments, env_list);
    handle_default_command(arguments);
    return 0;
}

int main(int argc, char **argv, char **env)
{
    char *line;
    char **arguments;
    int status = 1;
    env_var_t *env_list = NULL;

    do {
        my_printf("$> ");
        line = read_line();
        arguments = parse_line(line);
        program(arguments, env_list);
        free(line);
        free(arguments);
    } while (status);
    free_env_vars(env_list);
    return EXIT_SUCCESS;
}