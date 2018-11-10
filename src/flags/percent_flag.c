/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** CPE_BSQ_2018 project
*/

#include <stdarg.h>

void my_putchar(char c);
void my_putstr(char const *str);

void flag_percent(va_list list)
{
    my_putchar('%');
}