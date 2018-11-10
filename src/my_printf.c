/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include "../include/my_printf.h"


char *my_printf(char *first_str, ...)
{
    va_list list;
    void (*call_flag[11])(va_list) = {flag_percent, flag_d, flag_i, flag_o, flag_x,
                                        flag_X, flag_u, flag_c, flag_s, flag_S, flag_p};
    int i = 0;
    int flag = 11;

    va_start(list, first_str);

    while (first_str[i]) {
        if (first_str[i] == '%') {
            flag = get_id(first_str[i + 1]);
            if (0 <= flag && flag <= 10) {
                call_flag[flag](&list);
                i++;
            }
            else {
                my_putchar(first_str[i]);
            }
        } else {
            my_putchar(first_str[i]);
        }
        i++;
    }
    va_end(list);
    return ("Hayyy");
}