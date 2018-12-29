/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>

void my_put_nbr(int n);

void flag_i(va_list *list)
{
    int i = va_arg(*list, int);
    my_put_nbr(i);
}