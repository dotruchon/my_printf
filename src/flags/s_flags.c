/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>
#include "../my/my.h"

void put_printable_only(char const *str)
{
    int i = 0;
    char *dest = NULL;

    while (str[i]) {
        if (str[i] < 32) {
            my_putchar('\\');
            dest = my_itob(str[i], 7);
            my_putstr(dest);
            free(dest);
        } else
            my_putchar(str[i]);
        i++;
    }
}

void flag_s(va_list *list)
{
    char *str = va_arg(*list, char *);
    my_putstr(str);
}

void flag_S(va_list *list)
{
    char *str = va_arg(*list, char *);
    put_printable_only(str);
}