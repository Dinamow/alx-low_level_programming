#include "lists.h"

/**
 * print_lists - start point
 * @h: input
 * 
 * Return: size of list
*/
size_t print_list(const list_t *h)
{
    size_t i = 0;
    while (h)
    {
        printf("[%d] %s\n", _strlen(h->str), h-> str ? h->str : "(nil)");
        h = h->next;
        i++;
    }
    return (i);
}
