#include "lists.h"

/**
 * add_nodeint_end - start point
 * @head: input
 * @n: input
 *
 * Return: pointer to new node at the end of list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr = malloc(sizeof(listint_t));
listint_t *node = *head;

if (!ptr || !head)
return (NULL);
ptr->n = n;
if (node)
{
while (node->next)
    node = node->next;

node->next = ptr; 
}
else
*head = ptr;
ptr->next = NULL;

return (ptr);
}