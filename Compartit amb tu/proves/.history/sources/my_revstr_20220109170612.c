/*
** EPITECH PROJECT, 2021
** my revstr
** File description:
** function that reverses a string
*/

#include <stdlib.h>

int my_strlen2(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    i--;
    return (i);
}

void *my_revstr(char *str)
{
    //char *dup = malloc(sizeof(char) * my_strlen2(str) + 1);
    char tmp;
    int j = strlen2(str);
    int i = 0;

    while (str[i] != '\0')
    {
        str[i] = tmp;
        i++;
        j--;
    }
    /*
    for (int i = my_strlen2(str) - 1; i >= 0; i--) {
        dup[target] = str[i];
        target++;
    }
    dup[my_strlen2(str)] = 0;
    return (dup);
    
}
