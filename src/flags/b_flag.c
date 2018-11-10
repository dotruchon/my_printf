/*
** EPITECH PROJECT, 2018
** printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>

void my_put_nbr_base(int n, char *base);

void flag_b(va_list *list)
{
    int b = va_arg(*list, int);
    my_put_nbr_base(b, "01");
}