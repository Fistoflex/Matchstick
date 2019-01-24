/*
** EPITECH PROJECT, 2019
** remove matches
** File description:
** duh
*/

#include "my.h"

char **remove_matches(char **map, int line, int nb)
{
    int i = 0;
    int matches = 0;

    while (map[line - 1][i + 1] != 0)
        i++;
    while (i >= 0 && matches < nb) {
        if (map[line - 1][i] == '|') {
            map[line - 1][i] = ' ';
            matches++;
        }
        i--;
    }
    return (map);
}
