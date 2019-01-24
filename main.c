/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main function of the matchstick
*/

#include "my.h"

int check_error(int argc, char **argv)
{
    int size = 0;
    int limit = 0;
    int i = 1;
    
    if (argc != 3)
        return (84);
    else if (argc == 3) {
        size = my_getnbr(argv[1]);
        limit = my_getnbr(argv[2]);
        while (i <= 2)
            if (my_getnbr(argv[i]) != -1)
                i++;
            else
                return (84);
        if (my_getnbr(argv[1]) < 2 || my_getnbr(argv[1]) > 99)
            return (84);
        if (my_getnbr(argv[2]) < 1)
            return (84);
    }
    return (0);
}

int main(int argc, char **argv)
{
    int game = 0;
    int size = 0;
    int limit = 0;
    char **map = NULL;
    
    if (check_error(argc, argv) == 84)
        return (84);
    size = my_getnbr(argv[1]);
    limit = my_getnbr(argv[2]);
    map = create_map(size);
    matchstick(map, size, limit);
}
