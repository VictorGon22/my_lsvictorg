/*
** EPITECH PROJECT, 2021
** Sebas-i-victor-myprintf
** File description:
** function_4.c
*/

#include "./../includes/my_printflib.h"

void func_x(va_list list)
{
    long decimalnum = va_arg(list, long);
    long quotient = decimalnum;
    long carry;
    int j = 0;
    char hexadecimalnum[100];

    if (decimalnum != 0) {
        if (decimalnum < 0)
            decimalnum = 4294967295 + (decimalnum + 1);
        while (quotient != 0) {
            carry = quotient % 16;
            if (carry < 10)
                hexadecimalnum[j++] = 48 + carry;
            else
                hexadecimalnum[j++] = 87 + carry;
            quotient = quotient / 16;
        }
    } else
        hexadecimalnum[0] = '0';
    my_putstr(my_revstr(hexadecimalnum));
}