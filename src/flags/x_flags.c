/*
** EPITECH PROJECT, 2018
** printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>

void my_putchar(char c);
void my_putstr(char const *str);

void flag_x(va_list list)
{
    my_putchar('x');
}

void flag_X(va_list list)
{
    my_putchar('X');
}