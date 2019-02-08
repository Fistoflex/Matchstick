/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** matchsitck
*/

#include "my.h"

int loop_start(char **map, int size, int player)
{
    disp_map(map, size);
    if (check_map(map) == 0) {
        disp_end(player);
        if (player == 1)
            return (1);
        else if (player == -1)
            return (2);
    }
    return (0);
}

int matchstick(char **map, int size, int limit)
{
    int player = -1;
    int game = 0;
    int empty_or_not = 0;

    while(42) {
        player = player * -1;
        empty_or_not = loop_start(map, size, player);
        if (empty_or_not == 2)
            return (1);
        else if (empty_or_not == 1)
            return (2);
        if (player == 1) {
            my_putstr("\nYour turn:\n");
            game = player_play(&map, size, limit);
            if (game == 84)
                return (84);
        } else if (player == -1) {
            my_putstr("\nAI's turn...\n");
            ai_play(&map, size, limit);
        }
    }
}
