/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** prints characters of a tring one by one
*/

#include <unistd.h>

void    my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
    return (i);
}
