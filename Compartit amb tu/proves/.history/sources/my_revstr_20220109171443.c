/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"
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
    char dup[my_strlen2(str)];
    char tmp;
    int j = my_strlen2(str);
    int i = 0;

    while (str[i] != '\0')
    {
        dup[i] = str[j];
        i++;
        j--;
    }
    dup[j] = '\0';
    str = dup;
    printf("STR   %s\n", dup);
    /*
    for (int i = my_strlen2(str) - 1; i >= 0; i--) {
        dup[target] = str[i];
        target++;
    }
    dup[my_strlen2(str)] = 0;
    return (dup);
    */
}
