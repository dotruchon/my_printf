/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** CPE_BSQ_2018 project
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
    my_putstr_int(get_flags("%# %cl"));
}