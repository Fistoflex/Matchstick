/*
** EPITECH PROJECT, 2019
** display map
** File description:
** duh
*/

#include "my.h"

void disp_map(char **map, int size)
{
    int n = 0;
    int i = 0;
    int nb = size - 1;

    while (n != (size * 2) + 1) {
        my_putchar('*');
        n++;
    }
    my_putchar('\n');
    for (n = 0; map[n] != NULL; n++, nb--) {
        my_putchar('*');
        my_putstr(map[n]);
        for (i = 0; i != nb; i++)
            my_putchar(' ');
        my_putchar('*');
        my_putchar('\n');
    }
    for (n = 0; n != (size * 2) + 1; n++) {
        my_putchar('*');
    }
    my_putchar('\n');
}
