/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#define ERROR_NO_STRING             84

void my_putstr(char const *str);
void my_putchar(char c);

void my_putstr_error(char const *str);
void my_putchar_error(char c);

int *get_flags(char *first_str);
int get_id(char c);

void flag_percent(va_list *list);
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

int my_strlen(char *str);