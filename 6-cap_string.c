#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *cap_string(char *s)
{
    int i = 0;
    if (islower(s[i]))
    {
        s[i] = toupper(s[i]);
    }
    while (s[i] != '\0')
    {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
        {
            if (islower(s[i + 1]))
            {
                s[i + 1] = toupper(s[i + 1]);
            }
        }
        i++;
    }
    return s;
}