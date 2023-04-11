#include "main.h"
#include <stdlib.h>
/**
 * create_array - start point
 * @size: input
 * @c: input
 * allocate space
 * give some values
 * Return: NULL (failed),n (success)
*/
char *create_array(unsigned int size, char c)
{
char* n = malloc(size);
if (size == 0 || n == NULL)
{
return(NULL);
}
else
{
while (size--)
{
n[size] = c;
}
return(n);
}
    
}
