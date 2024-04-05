/*
** EPITECH PROJECT, 2023
** my_strcpy.c
** File description:
** Write a function that copies a string into another.
** The destination string will already have enough memory
** to copy the source string.
*/

char *my_strcpy(char *dest, char const *src)
{
    int a = 0;

    while (src[a] != '\0') {
        dest[a] = src[a];
        a = a + 1;
    }
    dest[a] = '\0';
    return dest;
}
