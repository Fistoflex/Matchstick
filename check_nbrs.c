/*
** EPITECH PROJECT, 2019
** chec nbrs
** File description:
** well duh
*/

#include "my.h"

void print_error_matches(int limit)
{
    my_putstr("Error: you cannot remove more than ");
    my_put_nbr(limit);
    my_putstr(" matches per turn\n");
}
