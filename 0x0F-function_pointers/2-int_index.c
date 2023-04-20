#include "function_iterator.h"
/**
 * int_index - start point
 * @array: input
 * @size: input
 * @cmp: input
 * 
 * Return: the index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
    int i = 0;
    if (array && size && cmp)
    {
        while (i < size)
        {
            if (cmp(array[i]))
            {
                return (i);
                i++;
            }
        }
        return (-1);
    }
}