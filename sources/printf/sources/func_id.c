/*
** EPITECH PROJECT, 2021
** Sebas-i-victor-myprintf
** File description:
** function_4.c
*/

#include "./../includes/my_printflib.h"

void func_i_d(va_list list)
{
    my_put_nbr((int)va_arg(list, int));
}