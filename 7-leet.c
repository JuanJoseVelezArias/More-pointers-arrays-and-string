#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *leet(char *str)
{
    int i, j;
    char leet_map[5][3] = {{'a', '4'}, {'e', '3'}, {'o', '0'}, {'t', '7'}, {'l', '1'}};
    for (i = 0; str[i] !='\0'; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if(str[i] == leet_map[j][0] || str[i] == leet_map[j][0] - 32)
            {
                str[i] = leet_map[j][1];
                break;
            }
        }
    }
    return str;
}