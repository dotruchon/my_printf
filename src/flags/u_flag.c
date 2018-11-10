/*
** EPITECH PROJECT, 2018
** printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>

void my_putchar(char c);
void my_putstr(char const *str);
void my_put_unsigned_nbr(unsigned int n);

void flag_u(va_list *list)
{
    unsigned int u = va_arg(*list, unsigned int);
    my_put_unsigned_nbr(u);
}