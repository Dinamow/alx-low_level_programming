#include "main.h"

/**
 * binart_to_unit - start point
 * @b: input
 * Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
    int count = 0;
    int temp[100];
    int arr[100];
    unsigned int result = 0;
    int i; 
    int j;
    int x = 0;
    for (j = 0; j < 100; j++)
    {
        arr[j] = 0;
    }
    for (j = 0; j < 100; j++)
    {
        temp[j] = 0;
    }
    for (count; *b; count++, b++)
    {
        if (*b == '0')
            x = 0;
        else
            x = 1;
        temp[count] = x;
    }
    b = b - count;
    count --;
    for (i = 0; *b; i++, b++, count--)
    {
        if (!*b || *b != '0' && *b != '1')
            return (0);
        else if (*b == '0')
            x = 0;
        else
            x = 1;
        arr[i] = temp[count] * pow(2,i);
    }
    x = 0;
    for (x = 0; x <= i; x++)
    {
        result += arr[x];
    }
    return (result);
}
