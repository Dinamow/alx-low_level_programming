#include "main.h"
#include <unistd.h>

/**
 * _memset - start point
 * @s: input
 * @b: input
 * @n: input
 * Return: s (success)
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; n > 0; a++, n--)
{
s[a] = b;
}
return(s);
}