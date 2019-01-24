/*
** EPITECH PROJECT, 2019
** player_play
** File description:
** player's turn
*/

#include "my.h"

int line(int *state, int size)
{
    char *buffer = NULL;
    size_t len = 0;
    int nbr_lin = 0;

    my_putstr("Line: ");
    if (getline(&buffer, &len, stdin) == -1)
        return (3845);
    nbr_lin = my_getnbr(buffer);
    if (nbr_lin == -1)
        my_putstr("Error: invalid input (positive number expected)\n");
    else if (nbr_lin < 1 || nbr_lin > size)
        my_putstr("Error: this line is out of range\n");
    else
        (*state) = 1;
    return (nbr_lin);
}

int matches(int *state)
{
    char *buffer = NULL;
    size_t len = 0;
    int nbr_matches = 0;

    my_putstr("Matches: ");
    if (getline(&buffer, &len, stdin) == -1)
        return (3845);
    nbr_matches = my_getnbr(buffer);
    if (nbr_matches == -1) {
        my_putstr("Error: invalid input (positive number expected)\n");
        (*state) = 0;
    } else
        (*state) = 2;
    return (nbr_matches);
}

int player_play(char ***map, int size, int limit)
{
    int nbr_line = 0;
    int nbr_matches = 0;
    int state = 0;

    while (42) {
        if (state == 0) {
            nbr_line = line(&state, size);
            if (nbr_line == 3845)
                return (84);
        }
        if (state == 1) {
            nbr_matches = matches(&state);
            if (nbr_matches == 3845)
                return (84);
        }
        if (state == 2) {
            if (check_matches(nbr_matches, nbr_line, limit, (*map)) != 84)
                (*map) = remove_matches((*map), nbr_line, nbr_matches);
            return (0);
        }
    }
}
