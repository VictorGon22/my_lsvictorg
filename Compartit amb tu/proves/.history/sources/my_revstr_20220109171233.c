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
    char *dup = malloc(sizeof(char) * my_strlen2(str) + 1);
    char tmp;
    int j = my_strlen2(str);
    int i = 0;

    while (str[i] != '\0')
    {
        str[i] = str[j];
        i++;
        j--;
    }
    printf("STR   %s\n", str);
    /*
    for (int i = my_strlen2(str) - 1; i >= 0; i--) {
        dup[target] = str[i];
        target++;
    }
    dup[my_strlen2(str)] = 0;
    return (dup);
    */
}
