/*
** EPITECH PROJECT, 2018
** printf
** File description:
** PSU_my_printf project
*/

#include <stdarg.h>

void my_putchar(char c);
void my_putstr(char const *str);
void my_put_nbr_base(int n, char *base);

void my_putstr_printable_only(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        if (str[count] < 32 || 127 <= str[count]) {
            my_putchar('\\');
            my_put_nbr_base(str[count], "01234567");
        } else {
            my_putchar(str[count]);
        }
        count++;
    }
}

void flag_s(va_list *list)
{
    char *s = va_arg(*list, char *);
    my_putstr(s);
}

void flag_S(va_list *list)
{
    char *S = va_arg(*list, char *);
    my_putstr_printable_only(S);
}