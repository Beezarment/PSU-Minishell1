/*
** EPITECH PROJECT, 2023
** b1
** File description:
** my_strdup.c
*/

#include "./include/my_lib.h"
#include <stddef.h>
#include <stdlib.h>

char *my_strdup(const char *str)
{
    unsigned int len;
    char *nstr;

    if (str == NULL) {
        return NULL;
    }
    len = (unsigned int)my_strlen(str);
    nstr = (char *)malloc(len + 1);
    if (nstr != NULL) {
        my_strcpy(nstr, str);
    }
    return nstr;
}
