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

    #define MAX_COMMAND_LENGTH 1024
    #define MAX_ARGUMENTS 64


void my_put_stderr(char *);
void change_directory(char **arguments);
void execute_command(char **arguments);
void exec_command(char **arguments);
char *find_command_path(const char *command);
pid_t create_child_process(void);
char *my_getenv(const char *name);
int my_env(env_var_t *env_list);
int my_setenv(const char *name, const char *value, int write, env_var_t **env);
void handle_default_command(char **arguments);
void handle_env_command(char **arguments, env_var_t *env_list);
void handle_setenv_command(char **arguments, env_var_t **env_list_ptr);
void handle_exit_command(char **arguments);
void handle_cd_command(char **arguments);
void free_env_vars(env_var_t *env_list);
void exit_shell(void);
env_var_t *find_env_var(const char *name, env_var_t *env_list);
void add_env_var(const char *name, const char *value, env_var_t **env_list);
static void init(char **env, env_var_t *env_list);

#endif
