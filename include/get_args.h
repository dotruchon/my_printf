/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** CPE_BSQ_2018 project
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
    {'%', 0},
    {'d', 1},
    {'i', 2},
    {'o', 3},
    {'x', 4},
    {'X', 5},
    {'u', 6},
    {'c', 7},
    {'s', 8},
    {'S', 9},
    {'p', 10},
    {1  , 11},
    {2  , -1},
};