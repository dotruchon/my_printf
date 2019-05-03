/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include "cri_include.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("foo");

    cr_assert_stdout_eq_str("foo");
}

Test(error_detector, empty_string, .init = redirect_all_std)
{
    error_detector("");

    cr_assert_stderr_eq_str("Error -> No string given to my_printf\n");
}

Test(my_printf, flag_d, .init = redirect_all_std)
{
    my_printf("Ceci est le test n°%d\n", 42);

    cr_assert_stdout_eq_str("Ceci est le test n°42\n");
}

Test(my_printf, flag_percent, .init = redirect_all_std)
{
    my_printf("%%hola");

    cr_assert_stdout_eq_str("%hola");
}

Test(my_printf, flag_o, .init = redirect_all_std)
{
    my_printf("%o ola", 14);

    cr_assert_stdout_eq_str("16 ola");
}