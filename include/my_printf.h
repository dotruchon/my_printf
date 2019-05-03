/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "my.h"

int get_id(char c);

void flag_d(va_list *list);
void flag_i(va_list *list);
void flag_o(va_list *list);
void flag_x(va_list *list);
void flag_X(va_list *list);
void flag_u(va_list *list);
void flag_c(va_list *list);
void flag_s(va_list *list);
void flag_S(va_list *list);
void flag_p(va_list *list);
void flag_b(va_list *list);

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
                };

int my_printf(char *first_str, ...);

#endif