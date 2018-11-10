/*
** EPITECH PROJECT, 2018
** printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>

void my_putchar(char c);
void my_putstr(char const *str);

void flag_i(va_list *list)
{
    int i = va_arg(*list, void *);
    my_put_nbr(i);
}