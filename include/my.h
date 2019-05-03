/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** header
*/

#ifndef H_LIBMY
# define H_LIBMY

#include <stdlib.h>

void my_puttab(char **tab);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
int my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_str_is_num(char const *str);
int my_atoi(char *str);
int my_getnbr(char const *str);
int my_putstrerr(char const *str);
int my_strcmp(char const *s1, char const *s2);
int file_strcmp(char const *s1, char const *s2);
int my_tablen(char **tab);

char *my_strdup(char const *src);
char *my_strncat(char *dest, char const *src, int n);
char *my_strncpy(char *dest, char const *str, int n);
char *my_strcatp(char *dest, char const *src);
char *sup_strncpy(char *src, int n);
char *my_strcpy(char *dest, char const *src);
char *sup_strcpy(char *src);
char *my_itob(int nb, int base);
char *my_utob(unsigned int nb, int base);
char *my_nb_to_base(char *number, char *base);
char *my_revstr(char *str);

#endif