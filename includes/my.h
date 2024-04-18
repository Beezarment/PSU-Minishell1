/*
** EPITECH PROJECT, 2023
** PSU
** File description:
** my.h
*/
#ifndef MY_H
    #define MY_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <sys/wait.h>
    #include "struct.h"

    #define MAX_COMMAND_LENGTH 2048
    #define MAX_ARGUMENTS 100


void exit_shell(void);
void my_put_stderr(char *);
char **parse_line(char *line);
void semi_colons(char *input);
char **parse_colon(char *line);
int my_env(env_var_t *env_list);
pid_t create_child_process(void);
char *my_getenv(const char *name);
void exec_command(char **arguments);
void execute_command(char **arguments);
void change_directory(char **arguments);
void free_env_vars(env_var_t *env_list);
void handle_cd_command(char **arguments);
void handle_exit_command(char **arguments);
char *find_command_path(const char *command);
void handle_default_command(char **arguments);
void env_init(char **env, env_var_t **env_list);
void append_env_var(env_var_t **l, env_var_t *new);
void update_env_var(env_var_t *env, char const *value);
void my_unsetenv(env_var_t **env_list, char const *name);
env_var_t *find_env_var(env_var_t *find, char const *name);
void handle_env_command(char **arguments, env_var_t **env_list);
env_var_t *create_new_env_var(char const *name, char const *value);
void handle_setenv_command(char **arguments, env_var_t **env_list);
void handle_unsetenv_command(char **arguments, env_var_t **env_list);
void my_setenv(env_var_t **env_list, char const *name, char const *value);
void add_env_var(const char *name, const char *value, env_var_t **env_list);

#endif
