/*
** EPITECH PROJECT, 2019
** disp_end.c
** File description:
** disp the end of the program
*/

#include "my.h"

void disp_end(int player)
{
    if (player == 1)
        my_putstr("I lost... snif... but I'll get you next time!!\n");
    else if (player == 2)
        my_putstr("You lost, too bad...\n");
}
