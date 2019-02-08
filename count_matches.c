/*
** EPITECH PROJECT, 2019
** count matches
** File description:
** count the matches
*/

#include "my.h"

int count_matches(char **map, int line)
{
    int i = 0;
    int res = 0;

    while (map[line - 1][i] != 0) {
        if (map[line - 1][i] == '|')
            res++;
        i++;
    }
    return (res);
}
