/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** CPE_BSQ_2018 project
*/

#include "../include/my_printf.h"

char *my_printf(char *first_str, ...)
{
    void (*call_flag[11])(char *, ...) = {flag_percent, flag_d, flag_i, flag_o, flag_x,
                                        flag_X, flag_u, flag_c, flag_s, flag_S, flag_p};
    int *flags = get_flags(first_str);
    int i = 0;
    int flag = 11;
    va_list list;

    va_start(list, first_str);

    while (first_str) {
        if (first_str[i] == '%') {
            flag = get_id(first_str[i + 1]);
            if (flag == 11)
                i++;
            else {
                call_flag[flag](char *, ...)
            }
        }

        my_putchar(first_str[i])
    }
}