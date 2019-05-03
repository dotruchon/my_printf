/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>
#include "../my/my.h"

void flag_o(va_list *list)
{
    int value = va_arg(*list, int);
    char *number = my_itob(value, 8);
    char *dest = my_nb_to_base(number, "01234567");

    my_putstr(dest);
    free(number);
    free(dest);
}
