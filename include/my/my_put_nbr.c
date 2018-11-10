/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** CPool_Day03_2018 task07
*/

#include <unistd.h>

void my_putchar(char c);

int abs(int n)
{
    if (n < 0)
        return (-n);
    else
        return (n);
}

int power(int n)
{
    int power = 1;
    power = 1;
    while (n > 1) {
        power = power * 10;
        n = n - 1;
    }
    return (power);
}

int digit_count(int n)
{
    int result = 0;
    int start = 1;

    while (start == 1 || n != 0) {
        start = 0;
        n = n / 10;
        result = result + 1;
    }
    return (result);
}

void my_put_nbr(int n)
{
    int neg = 0;
    int nb;
    int digit_counter;
    int stock;
    if (n < 0) {
        neg = 1;
        my_putchar('-');
    }
    if (n < -2147483647)
        digit_counter = digit_count(abs(n + 1));
    else {
        digit_counter = digit_count(abs(n));
    }
    while (digit_counter > 0) {
        stock = n / power(digit_counter);
        nb = stock % 10;
        if (neg)
            nb = -nb;
        my_putchar('0' + nb);
        digit_counter = digit_counter - 1;
    }
}