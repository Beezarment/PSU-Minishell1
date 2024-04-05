/*
** EPITECH PROJECT, 2023
** my_put_nbr_2.c
** File description:
** second one
*/

int my_put_nbr_2(int nb)
{
    int cpt = 0;

    if (nb < 0) {
        cpt += my_putchar('-');
        nb *= -1;
    } else if (nb >= 10) {
        cpt += my_put_nbr(nb / 10);
    }
    cpt += my_putchar((nb % 10) + '0');
    return cpt;
}
