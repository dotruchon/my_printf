/*
** EPITECH PROJECT, 2018
** CPE_getnextline_2018 project
** File description:
** get_next_line
*/

#include <stdlib.h>

char *my_revstr(char *str);

int get_nb_char_from_int_base(int nb, int base)
{
    int count = 0;

    if (nb < 0) {
        nb *= -1;
        count++;
    } while (nb >= 1) {
        nb /= base;
        count++;
    }
    return count;
}

char *my_itob(int nb, int base)
{
    int i = 0;
    int nb_char = get_nb_char_from_int_base(nb, base);
    int divide = 1;
    char *dest = malloc(sizeof(char) * (nb_char + 1));

    if (nb < 0) {
        dest[nb_char - 1] = '-';
        nb_char--;
        nb *= -1;
    } while (i < nb_char) {
        dest[i] = ((nb / divide) % base) + 48;
        i++;
        divide *= base;
    }
    dest[nb_char] = '\0';
    dest = my_revstr(dest);
    return dest;
}