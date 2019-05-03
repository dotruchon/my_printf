/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>
#include "../my/my.h"

void flag_x(va_list *list)
{
    int value = va_arg(*list, int);
    char *number = my_itob(value, 16);
    char *dest = my_nb_to_base(number, "0123456789abcdef");

    my_putstr(dest);
    free(number);
    free(dest);
}

void flag_X(va_list *list)
{
    int value = va_arg(*list, int);
    char *number = my_itob(value, 16);
    char *dest = my_nb_to_base(number, "0123456789ABCDEF");

    my_putstr(dest);
    free(number);
    free(dest);
}