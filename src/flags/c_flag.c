/*
** EPITECH PROJECT, 2018
** printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>

void my_putchar(char c);
void my_putstr(char const *str);

void flag_c(va_list *list)
{
    char c = va_arg(*list, void *);
    my_putchar(c);
}