#include "main.h"
#include <unistd.h>

/**
 * 
*/

char *_memset(char *s, char b, unsigned int n)
{
char* a;
int i;
i = 0;
while (i < n);
{
    *a = *s;
    *s = b;
    s++;
    i++;
}
return(a);
}