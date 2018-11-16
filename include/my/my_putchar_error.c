/*
** EPITECH PROJECT, 2018
** my_putchar
** File description:
** CPool_Day03_2018
*/
#include <unistd.h>

void my_putchar_error(char c)
{
    write (2, &c, 1);
}