/*
** EPITECH PROJECT, 2018
** printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>

void my_putchar(char c);
void my_putstr(char const *str);
void my_put_nbr_base_long(long n, char *base);

void flag_p(va_list *list)
{
    my_putstr("0x00");
    my_put_nbr_base_long(va_arg(*list, long), "0123456789abcdef");
}