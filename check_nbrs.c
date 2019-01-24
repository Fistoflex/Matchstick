/*
** EPITECH PROJECT, 2019
** chec nbrs
** File description:
** well duh
*/

#include "my.h"

int check_matches(int matches, int line, int limit, char **map)
{
    if (matches > count_matches(map, line)) {
        my_putstr("Error: not enough matches on this line\n");
        return (84);
    }
    if (matches > limit) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(limit);
        my_putstr(" matches per turn\n");
        return (84);
    }
}
