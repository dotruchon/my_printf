/*
** EPITECH PROJECT, 2018
** printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>

void my_putchar(char c);
void my_putstr(char const *str);
void my_put_nbr(int n);

void flag_d(va_list *list)
{
    int d = va_arg(*list, void *);
    my_put_nbr(d);
}