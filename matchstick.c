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
    if (check_map(map) == 1) {
        disp_end(player);
        if (player == 1)
            return (1);
        else if (player == 2)
            return (2);
    }
}

int matchstick(char **map, int size, int limit)
{
    int state = 0;
    int player = 1;
    int map_check = 0;
    int game = 0;
    
    while(42) {
        /* if (loop_start(map, size, player) == 2) */
        /*     return (1); */
        /* else if ((loop_start(map, size, player) == 1)) */
        /*     return (2); */
        /* if (player == 1) { */
        /*     if (player_play(&map, size, limit) == 84) */
        /*         return (84); */
        /*     player = 2; */
        /* } */
        /* if (player == 2) { */
        /*     ia_play(&map, size, limit); */
        /*     player == 1; */
        if (loop_start(map, size, player) == 1)
            return (1);
        if (game = player_play(&map, size, limit) == 84)
            return (84);
        
        // }
    }
}
