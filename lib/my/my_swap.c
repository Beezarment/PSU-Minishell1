/*
** EPITECH PROJECT, 2023
** my_swap
** File description:
** Write a function that swaps the content of two integers,
** whose addresses are given as a parameter.
*/

void my_swap(int *a, int *b)
{
    int ptr;

    ptr = *a;
    *a = *b;
    *b = ptr;
}
