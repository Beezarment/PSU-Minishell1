/*
** EPITECH PROJECT, 2023
** my_getnbr.c
** File description:
** function that returns a number, sent to
** the function as a string.
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int j = 1;

    if (*str == '-') {
        j = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        i = i * 10 + (*str - '0');
        str++;
    }
    return i * j;
}
