/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** CPool_Day07_2018
*/

int my_strlen(char *str);

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;
    char swap;

    while (i <= j)
    {
        swap = str[i];
        str[i] = str[j];
        str[j] = swap;
        i++;
        j--;
    }
    return (str);
}