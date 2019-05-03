/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** task02
*/

#include "unistd.h"

void my_putstr(char const *str)
{
    unsigned int i = 0;

    while (str[i]) {
        write(1, &str[i], 1);
        ++i;
    }
}
