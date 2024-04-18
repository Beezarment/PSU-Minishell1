/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell2-armand.dufresne
** File description:
** semi_colons.c
*/

#include "../../includes/my.h"
#include "../../lib/my/include/my_lib.h"
#include "../../includes/struct.h"

char **parse_colon(char *line)
{
    char **commands = malloc(MAX_ARGUMENTS * sizeof(char *));
    char *token;
    int command_count;

    if (!commands) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    token = strtok(line, " ;");
    command_count = 0;
    while (token != NULL) {
        commands[command_count] = strdup(token);
        if (!commands[command_count]) {
            perror("strdup");
            exit(EXIT_FAILURE);
        }
        command_count++;
        token = strtok(NULL, " ;");
    }
    commands[command_count] = NULL;
    return commands;
}
