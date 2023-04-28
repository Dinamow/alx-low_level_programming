#include "lists.h"

/**
 * print_listint - start point
 * @h: input
 *
 * Return: size of the list
*/
size_t print_listint(const listint_t *h)
{
    int i = 0;
    if (!h)
    {
        return 0;
    }
    while (*h++)
    {
        i++;
    }
    return (i);
}