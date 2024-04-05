/*
** EPITECH PROJECT, 2023
** my_nbr_base.c
** File description:
** different put_nbr using different base
*/

#include <unistd.h>

int my_nbr_base(long int, int base)
{
    int cpt = 0;
    int n = 0;

    if (n < 0) {
        write(1, "-", 1);
        return my_nbr_base(-n / base, base) + 1;
    } else {
        return (n / base);
    }
    return cpt + my_nbr_base(n % base, base);
}
