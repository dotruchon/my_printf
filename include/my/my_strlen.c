/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** CPool_Day07_2018
*/

int my_strlen(char *str)
{
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }
    return (count);
}