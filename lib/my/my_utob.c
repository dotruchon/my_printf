/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_utob
*/

#include <stdlib.h>

char *my_revstr(char *str);

int get_nb_char_from_unsigned_base(unsigned int nb, int base)
{
    int count = 0;

    while (nb >= 1) {
        nb /= base;
        count++;
    }
    return count;
}

char *my_utob(unsigned int nb, int base)
{
    int i = 0;
    int nb_char = get_nb_char_from_unsigned_base(nb, base);
    int divide = 1;
    char *dest = malloc(sizeof(char) * (nb_char + 1));

    while (i < nb_char) {
        dest[i] = nb / divide % base + 48;
        i++;
        divide *= base;
    }
    dest[nb_char] = '\0';
    dest = my_revstr(dest);
    return dest;
}