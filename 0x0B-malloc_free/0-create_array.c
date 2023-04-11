#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    if (size == 0)
    {
        return(NULL);
    }
    else
    {
        c = malloc(sizeof(int)* size);
        if (c == 0)
        {
            return(NULL);
        }
        else
        {
            return(c);   
        }
    }
    
}
