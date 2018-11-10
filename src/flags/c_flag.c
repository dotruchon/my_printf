/*
** EPITECH PROJECT, 2018
** printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>
#include <unistd.h>

void my_putstr(char const *str);

void flag_c(va_list *list)
{
    char c = va_arg(*list, int);
    write(1, &c, 1);
}