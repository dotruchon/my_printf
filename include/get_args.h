/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void my_putstr(char const *str);
void my_putchar(char c);
void my_put_nbr(int n);

struct types
{
    char c;
    int id;
} types;

struct types flags_list[] =
{
    {'d', 0},
    {'i', 1},
    {'o', 2},
    {'x', 3},
    {'X', 4},
    {'u', 5},
    {'c', 6},
    {'s', 7},
    {'S', 8},
    {'p', 9},
    {'b', 10},
    {'%', 11},
    {1  , 12},
    {2  , -1},
};