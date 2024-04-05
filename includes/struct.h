/*
** EPITECH PROJECT, 2023
** PSU
** File description:
** struct.h
*/

#ifndef STRUCT
    #define STRUCT

typedef struct env_var_s {
    char *name;
    char *value;
    struct env_var_s *next;
} env_var_t;

#endif
