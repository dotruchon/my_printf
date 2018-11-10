/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include "../include/main.h"
#include <stdio.h>

void my_putstr_int(int *str_int)
{
    int i = 0;

    while (str_int[i] != -1) {
        my_put_nbr(str_int[i]);
        my_putchar('\n');
        i++;
    }
}

int main (void)
{
    my_printf("%i h %d j  %c", 4, 1, 'K');
}