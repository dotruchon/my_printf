/*
** EPITECH PROJECT, 2018
** printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>

void my_putchar(char c);
void my_putstr(char const *str);
void my_put_nbr_base_unsigned_long(unsigned long n, char *base);

void flag_p(va_list *list)
{
    unsigned long p = va_arg(*list, unsigned long);
    
    my_putstr("0x");
    my_put_nbr_base_unsigned_long(p, "0123456789abcdef");
}