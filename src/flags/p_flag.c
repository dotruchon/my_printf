/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>
#include "../my/my.h"

void flag_p(va_list *list)
{
    unsigned long value = va_arg(*list, unsigned long);
    char *number = my_utob(value, 16);
    char *dest = my_nb_to_base(number, "0123456789abcdef");

    my_putstr("0x");
    my_putstr(dest);
    free(number);
    free(dest);
}