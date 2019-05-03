/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** putstrerr
*/

#include <unistd.h>

void my_putstrerr(char const *str)
{
    unsigned int i = 0;

    while (str[i]) {
        write(2, &str[i], 1);
        ++i;
    }
}