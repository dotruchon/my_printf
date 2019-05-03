/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

int my_printf(char *first_str, ...);

#include "stdio.h"

int main()
{
    my_printf("%o hla\n", 14);
    printf("%o hla\n\n", 14);

    my_printf("%x hla\n", 14);
    printf("%x hla\n", 14);
    return 0;
}