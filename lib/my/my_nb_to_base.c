/*
** EPITECH PROJECT, 2018
** matchstick
** File description:
** CPE_matchstick_2018 project
*/

#include "my.h"

char *my_nb_to_base(char *number, char *base)
{
    int i = 0;
    int len = my_strlen(base);
    int weight = 0;
    char *dest;

    if (!number || !base)
        return NULL;
    dest = malloc(sizeof(char) * (len + 1));
    while (number[i]) {
        if ((weight = number[i] - '0') < 0)
            return NULL;
        dest[i] = base[weight];
        i++;
    }
    dest[i] = '\0';
    return dest;
}