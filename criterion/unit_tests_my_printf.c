/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** PSU_my_printf project
*/

#include "unit_tests_my_printf.h"

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

Test(my_printf, string_flag_d, .init = redirect_all_std)
{
    my_printf("Ceci est le test n°%d\n", 42);

    cr_assert_stderr_eq_str("Ceci est le test n°42\n");
}
