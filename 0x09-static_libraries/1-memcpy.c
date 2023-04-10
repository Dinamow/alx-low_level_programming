#include "main.h"
#include <unistd.h>

/**
 * _memcpy - start point
 * @dest: input
 * @src: input
 * @n: input
 * Return: dest (success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];

return(dest);
}
