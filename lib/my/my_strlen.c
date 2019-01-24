/*
** EPITECH PROJECT, 2018
** m'enfiche
** File description:
** mon gars
*/

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}
