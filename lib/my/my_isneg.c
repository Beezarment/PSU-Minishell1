/*
** EPITECH PROJECT, 2023
** my_isneg.c
** File description:
** Write a function that displays either N if the integer
** passed as parameter is negative or P, if positive or null.
*/

#include <unistd.h>

int my_isneg(int n)
{
    int va;
    int vb;

    va = 80;
    vb = 78;
    if (n >= 0) {
        write(1, &va, 1);
    } else {
        write(1, &vb, 1);
    }
    return (0);
}
