/*
** EPITECH PROJECT, 2019
** create_map
** File description:
** Well duh
*/

#include "my.h"

char **create_map(int size)
{
    char **res = NULL;
    int x = 0;
    int i = 0;
    int nb = size;
    int spaces = nb - 1;

    res = malloc(sizeof(char *) * (nb + 1));
    while (i != size) {
        res[i] = malloc(sizeof(char) * (nb + 1));
        for (x = 0; x != spaces && spaces > 0; x++)
            res[i][x] = ' ';
        for (; x != nb; x++)
            res[i][x] = '|';
        res[i][x] = 0;
        nb = nb + 1;
        spaces = spaces - 1;
        i++;
    }
    res[i] = NULL;
    return (res);
}
