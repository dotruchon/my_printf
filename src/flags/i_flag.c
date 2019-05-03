/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include <stdlib.h>
#include <stdarg.h>
#include "../my/my.h"

void flag_i(va_list *list)
{
    int value = va_arg(*list, int);
    char *dest = my_itob(value, 10);

    my_putstr(dest);
    free(dest);
}