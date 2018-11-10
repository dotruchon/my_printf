/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include "../include/get_args.h"

int get_id(char c)
{
    int id;
    int i = 0;

    while (flags_list[i].id != -1) {
        if (c == flags_list[i].c) {
            id = flags_list[i].id;
            return (id);
        }
        i++;
    }
    return (11);
}

int *get_flags(char *first_str)
{
    int *flags = malloc(sizeof(int) * 20);
    int i = 0;
    int j = 0;

    while (first_str[i]) {
        if (first_str[i] == '%') {
            flags[j] = get_id(first_str[i + 1]);
            j++;
        }
        i++;
    }
    flags[j] = -1;
    return (flags);
}