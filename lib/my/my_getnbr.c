/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** task05
*/

#include <limits.h>

int my_getnbr(char const *str)
{
    int Y = 0;
    int nbr = 0;

    while (str[Y] != 0) {
        if (str[Y] < 48 || str[Y] > 57) {
            if (str[Y] != 10)
                return (-1);
        } else {
            nbr = (nbr * 10) + (str[Y] - 48);
            if (nbr < (INT_MIN / 10) || nbr > (INT_MAX))
                return (-1);
        }
        Y++;
    }
    return (nbr);
}
