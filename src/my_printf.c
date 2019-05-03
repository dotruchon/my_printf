/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include "../include/my_printf.h"

int error_detector(char *str)
{
    if (!str || !my_strlen(str)) {
        my_putstrerr("Error -> No string given to my_printf\n");
        return 84;
    }
    return 0;
}

int get_id(char c)
{
    int id;
    int i = 0;

    while (i <= 10) {
        if (c == flags_list[i].c) {
            id = flags_list[i].id;
            return (id);
        }
        i++;
    }
    return -1;
}

int my_printf(char *first_str, ...)
{
    va_list list;
    void (*call_flag[11])(va_list *) = {&flag_d, &flag_i, &flag_o, &flag_x,
                                        &flag_X, &flag_u, &flag_c, &flag_s,
                                        &flag_S, &flag_p, &flag_b};
    int i = 0;
    int flag;

    if (error_detector(first_str) == 84)
        return 84;
    va_start(list, first_str);
    while (first_str[i]) {
        if (first_str[i] == '%' && first_str[i + 1] != '%' &&
                        (flag = get_id(first_str[++i]) != -1))
            call_flag[flag](&list);
        else
            my_putchar(first_str[i]);
        i++;
    }
    va_end(list);
    return 0;
}