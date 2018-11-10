/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include "../include/main.h"
#include <stdio.h>

int main (void)
{
    int *a = 5;
    my_printf("Ceci : %p \n", &a);
    printf("%p #d", &a);
}