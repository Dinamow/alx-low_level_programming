#include "main.h"
#include <stdio.h>



int _islower(char c)
{
    return (c >= 97 && c <= 122);
}


int isdelimiter(char c)
{
int i;
char delimiter[] = " \t\n,.!?\"(){}";
for (i = 0; i < 12; i++)
{
    if (c == delimiter[i])
    return(1);
}
return (0);
}

/**
 * cap_string - start point
 * @char: input
*/

char *cap_string(char *s)
{
char* ptr = s;
int founddelimiter = 1;
while (*s)
{
    if (isdelimiter(*s))
    {
        founddelimiter = 1;
    }
    else if (islower(*s) && founddelimiter)
    {
        *s -= 32;
        founddelimiter = 1;
    }
    else
    {
        founddelimiter = 0;
    }
    s++;
}
return(ptr);
}