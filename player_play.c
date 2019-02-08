/*
** EPITECH PROJECT, 2019
** player_play
** File description:
** player's turn
*/

#include "my.h"

int line(int size)
{
    char *buffer = NULL;
    size_t len = 0;
    int nbr_lin = 0;

    my_putstr("Line: ");
    if (getline(&buffer, &len, stdin) == -1)
        return (3845);
    nbr_lin = my_getnbr(buffer);
    if (nbr_lin == -1) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (3846);
    } else if (nbr_lin < 1 || nbr_lin > size) {
        my_putstr("Error: this line is out of range\n");
        return (3846);
    }
    return (nbr_lin);
}

int matches(int line, int limit, char ***map)
{
    char *buffer = NULL;
    size_t len = 0;

    my_putstr("Matches: ");
    if (getline(&buffer, &len, stdin) == -1)
        return (3845);
    if (my_getnbr(buffer) == -1) {
        my_putstr("Error: invalid input (positive number expected)\n");
        return (3846);
    } else if (my_getnbr(buffer) == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (3846);
    } else if (my_getnbr(buffer) > limit) {
        print_error_matches(limit);
        return (3846);
    } else if (my_getnbr(buffer) > count_matches(*map, line)) {
        my_putstr("Error: not enough matches on this line\n");
        return (3846);
    }
    return (my_getnbr(buffer));
}

int init(char ***map, args_t *args, int size, int limit)
{
    int nbr_line = line(size);
    int nbr_matches = 0;

    if (nbr_line == 3845) {
        args->res = 84;
        return (84);
    }
    else if (nbr_line == 3846)
        return (-1);
    nbr_matches = matches(nbr_line, limit, map);
    if (nbr_matches == 3845) {
        args->res = 84;
        return (84);
    }
    else if (nbr_matches == 3846)
        return (-1);
    args->nbr_line = nbr_line;
    args->nbr_matches = nbr_matches;
    return (0);
}

int player_play(char ***map, int size, int limit)
{
    args_t arguments;
    int i = 0;
    
    while ((i = init(map, &arguments, size, limit)) == -1);
    if (arguments.res == 84)
        return (84);
    (*map) = remove_matches(*map, arguments.nbr_line, arguments.nbr_matches);
    my_putstr("Player removed ");
    my_put_nbr(arguments.nbr_matches);
    my_putstr(" match(es) from line ");
    my_put_nbr(arguments.nbr_line);
    my_putchar(10);
    return (1);
}
