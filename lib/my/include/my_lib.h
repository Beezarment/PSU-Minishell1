/*
** EPITECH PROJECT, 2023
** my_lib.h
** File description:
** compile the lib
*/

#include <stdarg.h>
#include <stddef.h>

#ifndef MY_LIB_H
    #define MY_LIB_H


int my_compute_square_root(void);
int digita(va_list *arg);
int characa(va_list *arg);
int chaina(va_list *arg);
int pointa(va_list *arg);
int octa(va_list *arg);
int deca(va_list *arg);
int hexe(va_list *arg);
int flota(va_list *arg);
void flag_f(double nb);
void my_put_unsigned(unsigned int nb);
int my_octal(int nb);
int my_deci(unsigned int nb);
int hexa(va_list *arg);
int go_threw(va_list *list, const char *ptr);
int my_printf(const char *format, ...);
int my_hexa_min(unsigned int nb);
int my_putstr(char const *str);
int my_sort_int_array(void);
char *my_strcpy(char *dest, char const *src);
int my_str_isprintable(void);
char *my_strdup(const char *str);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strupcase(char *str);
int my_find_prime_sup(void);
int my_isneg(int n);
int my_ptr(void);
char *my_revstr(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isupper(char const *str);
int my_strncmp(const char *s1, const char *s2, size_t n);
void my_swap(int *a, int *b);
int my_getnbr(char const *str);
int my_is_prime(void);
void my_putchar(char c);
int my_showmem(void);
char my_strcat(char *dest, char const *src);
int my_str_islower(char const *str);
int my_strlen(char const *str);
char *my_strncpy(char *dest, char const *src, int n);
int my_compute_power_rec(int nb, int p);
int my_hexa_maj(unsigned int nb);
int my_nbr_base(long int, int base);
int my_put_nbr(int nb);
int my_showstr(void);
int my_strcmp(const char *s1, const char *s2);
int my_str_isnum(char const *str);
char *my_strlowcase(char *str);
char *my_strstr(void);

#endif
