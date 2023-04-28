#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */


int _strcmp(char *s1, char *s2)
{
    while(*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}