/*
** EPITECH PROJECT, 2019
** ai_playc
** File description:
** AI's turn
*/

#include "my.h"

void disp_ai_play(int matches, int line)
{
    my_putstr("AI removed ");
    my_put_nbr(matches);
    my_putstr(" match(es) from line ");
    my_put_nbr(line);
    my_putchar(10);
}

int random_int(int limit)
{
    int res = 0;

    res = random() % (limit + 1);
    while (res == 0)
        res = random() % (limit + 1);
    return (res);
}

int ai_play(char ***map, int size, int limit)
{
    int i = 1;
    int line = 0;
    int matches = 0;

    while (i == 1) {
        line = random_int(size);
        if (count_matches(*map, line) == 0)
            i = 1;
        else
            i = 0;
    }
    while (i == 0) {
        matches = random_int(count_matches(*map, line));
        if (matches > limit)
            i = 0;
        else
            i = 1;
    }
    remove_matches((*map), line, matches);
    disp_ai_play(matches, line);
    return (0);
}
