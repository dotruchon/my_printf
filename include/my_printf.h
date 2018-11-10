/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** CPE_BSQ_2018 project
*/

#include <stdio.h>
#include <stdarg.h>

void my_putstr(char const *str);
void my_putchar(char c);

int *get_flags(char *first_str);

void flag_percent(char *first_str, va_list list);
void flag_d(char *first_str, va_list list);
void flag_i(char *first_str, va_list list);
void flag_o(char *first_str, va_list list);
void flag_x(char *first_str, va_list list);
void flag_X(char *first_str, va_list list);
void flag_u(char *first_str, va_list list);
void flag_c(char *first_str, va_list list);
void flag_s(char *first_str, va_list list);
void flag_S(char *first_str, va_list list);
void flag_p(char *first_str, va_list list);
