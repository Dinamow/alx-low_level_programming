#include "lists.h"
/**
 * _strlen - start point
 * @s: input
 * 
 * Return: int
*/

int _strlen(char* s)
{
    int i = 0;
    if (!s)
        return 0;
    while(*s++)
        i++;
    return (i);
}
