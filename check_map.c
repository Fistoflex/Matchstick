/*
** EPITECH PROJECT, 2019
** check map . c
** File description:
** checks if the map is empty or not
*/

#include "my.h"

int check_map(char **map)
{
    int i = 0;
    int x = 0;

    while (map[i] != NULL) {
        for (x = 0; map[i][x] != 0; x++)
            if (map[i][x] == '|')
                return (1);
        i++;
    }
    return (0);
}
