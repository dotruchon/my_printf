/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>

void my_put_nbr_base(int n, char *base);

void flag_o(va_list *list)
{
    int o = va_arg(*list, int);
    my_put_nbr_base(o, "01234567");
}