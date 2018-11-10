/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** CPool_Day03_2018 task07
*/

#include <unistd.h>

void my_putchar(char c);

int unsigned_power(unsigned int n)
{
    int power = 1;
    power = 1;
    while (n > 1) {
        power = power * 10;
        n = n - 1;
    }
    return (power);
}

int unsigned_digit_count(unsigned int n)
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

void my_put_unsigned_nbr(unsigned int n)
{
    int nb;
    int digit_counter;
    unsigned int stock;

    digit_counter = unsigned_digit_count(n);
    while (digit_counter > 0) {
        stock = n / unsigned_power(digit_counter);
        nb = stock % 10;
        my_putchar('0' + nb);
        digit_counter = digit_counter - 1;
    }
}