/*
** EPITECH PROJECT, 2019
** test.c
** File description:
** tests for the clean_str
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(get_nbr_mod, good_return_minus_one_simple)
{
    int i = 0;

    i = my_getnbr("j'aime les saucisses\n");
    cr_assert_eq(i, -1);
}

Test(get_nbr_mod, good_return_minus_one_nbrs_and_letters)
{
    int i = 0;

    i = my_getnbr("12j'aime les84 saucisse5s\n");
    cr_assert_eq(i, -1);
}

Test(get_nbr_mod, good_return_ten_ascii)
{
    int i = 0;

    i = my_getnbr("12\n");
    cr_assert_eq(i, -1);
}

Test(check_map, good_return_when_empty)
{
    char *map[] = {"   ", "   ", "   ",};
    cr_assert_eq(check_map(map), 0);
}
