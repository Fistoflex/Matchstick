/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void my_putchar(char);
void my_put_nbr(int);
int my_getnbr(char *);
void disp_map(char **, int);
void my_putstr(char *);
int check_map(char**);
int player_play(char ***, int, int);
int check_matches(int, int, int, char **);
char **remove_matches(char **, int, int);
int matchstick(char **, int, int);
void disp_end(int);
int my_strlen(char *);
int count_matches(char **, int);
void disp_map(char **, int);
char **create_map(int);

#endif
