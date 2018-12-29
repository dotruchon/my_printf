/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>

void my_put_nbr_base(int n, char *base);

void flag_x(va_list *list)
{
    int x = va_arg(*list, int);
    my_put_nbr_base(x, "0123456789abcdef");
}

void flag_X(va_list *list)
{
    int x = va_arg(*list, int);
    my_put_nbr_base(x, "0123456789ABCDEF");
}