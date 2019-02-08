/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef __MY_H__
#define __MY_H__

#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>


typedef struct args_s
{
    int nbr_line;
    int nbr_matches;
    int res;
} args_t;

int ai_play(char ***, int, int);
void my_putchar(char);
void my_put_nbr(int);
int my_getnbr(char *);
char *my_strcat(char const *, char const *);
void disp_map(char **, int);
void my_putstr(char *);
int check_map(char**);
int player_play(char ***, int, int);
void print_error_matches(int);
char **remove_matches(char **, int, int);
int matchstick(char **, int, int);
void disp_end(int);
int my_strlen(char *);
int count_matches(char **, int);
void disp_map(char **, int);
char **create_map(int);

#endif
