/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** CPool_Day04_2018 my_putstr
*/

void my_putchar(char c);

void my_putstr(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        my_putchar(str[count]);
        count++;
    }
}