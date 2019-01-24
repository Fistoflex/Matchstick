/*
** EPITECH PROJECT, 2019
** ai_playc
** File description:
** AI's turn
*/

#include "my.h"

int random_int(int limit)
{
    int res = 0;
    long int time = time(0);

    srand(time);
    res = rand() % limit;
}

void ai_play(char ***map, int size, int limit)
{
    
}
