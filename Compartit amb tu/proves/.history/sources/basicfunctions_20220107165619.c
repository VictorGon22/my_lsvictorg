/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** Exercise myhunt page 1
*/

#include "./../includes/library.h"
#include "./../includes/structs.h"

void my_putchar(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int fs_open_file(char const *filepath)
{
    if (open(filepath, O_RDONLY) != -1) {
        return (0);
    }
    else {
        exit (84);
    }
}