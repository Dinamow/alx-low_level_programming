#include "lists.h"

/**
 * add_nodeint - start point
 * @head: input
 * @n: input
 *
 * Return: node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *ptr = malloc(sizeof(listint_t));
    if (!head || !ptr)
        return (NULL);
    
    ptr->n = n;
    ptr->next = *head;
    *head = ptr;
    return (ptr);
}