#include "main.h"

/**
 * _strcmp - start point
 * @s1: input
 * @s2: input
 * do some math
 * Return: euqal
*/

int _strcmp(char *s1, char *s2)
{
int equal = 0;

while (*s1)
{
    if (*s1 != s2)
    {
        equal = ((int)*s1 - 48) - ((int)*s2 -48)
    }
    s1++;
    s2++''
}
return (euqal);
}
