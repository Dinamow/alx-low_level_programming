#include "main.h"
#include <stdlib.h>

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
