/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** CPool_Day03_2018 task07
*/

#include <unistd.h>

void my_putchar(char c);
int my_strlen(char *str);

int abs_base(int n)
{
    if (n < 0)
        return (-n);
    else
        return (n);
}

int power_base(int n, int len_base)
{
    int power = 1;
    power = 1;
    while (n > 1) {
        power = power * len_base;
        n = n - 1;
    }
    return (power);
}

int digit_count_base(int n, int len_base)
{
    int result = 0;
    int start = 1;

    while (start == 1 || n != 0) {
        start = 0;
        n = n / len_base;
        result = result + 1;
    }
    return (result);
}

void my_put_nbr_base(int n, char *base)
{
    int neg = 0;
    int nb;
    int digit_counter;
    int stock;
    int len_base = my_strlen(base);
    if (n < 0) {
        neg = 1;
        my_putchar('-');
    }
    digit_counter = digit_count_base(abs_base(n), len_base);
    while (digit_counter > 0) {
        stock = n / power_base(digit_counter, len_base);
        nb = stock % len_base;
        if (neg)
            nb = -nb;
        my_putchar(base[0 + nb]);
        digit_counter = digit_counter - 1;
    }
}