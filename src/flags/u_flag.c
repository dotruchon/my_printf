/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>
#include "../my/my.h"

void flag_u(va_list *list)
{
    unsigned int value = va_arg(*list, unsigned int);
    char *dest = my_utob(value, 10);

    my_putstr(dest);
    free(dest);
}