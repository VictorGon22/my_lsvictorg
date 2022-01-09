/*
** EPITECH PROJECT, 2021
** my revstr
** File description:
** function that reverses a string
*/

int my_strlen2(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    i--;
    return (i);
}

char *my_revstr(char *str)
{
    char *dup = malloc(sizeof(char) * my_strlen(str) + 1);
    int target = 0;

    for (int i = my_strlen(str) - 1; i >= 0; i--) {
        dup[target] = str[i];
        target++;
    }
    dup[my_strlen(str)] = 0;
    return (dup);
}
}
