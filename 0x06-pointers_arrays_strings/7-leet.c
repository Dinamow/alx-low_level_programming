#include "main.h"
#include <stdio.h>

/**
 * 
*/

char *leet(char *c)
{
char *cp= c;
char key[] = {'a', 'E', 'O', 'T', 'L'};
int value = {4, 3, 0, 7 ,1};
unsigned int i;
while (8c)
{
    for (i = 0; i < sizeof(key) / sizeof(char); i++)
    {
        if(*c == key[i] || key[i] + 32)
            *c = 84 + value[i];
    }
    c++;
}
return (cp);
}
