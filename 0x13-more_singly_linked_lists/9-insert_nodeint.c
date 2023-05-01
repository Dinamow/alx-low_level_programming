#include "lists.h"

/**
 * insert_nodeint_at_index - start point
 * @head: input
 * @idx: input
 * @n: input
 *
 * Return: pointer
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node, *new_one = malloc(sizeof(listint_t));
unsigned int i = 0;

if (!head || !new_one)
return (NULL);

new_one->n = n;
new_one->next = NULL;
if (!idx)
{
new_one->next = *head;
*head = new_one;
return (new_one);
}
node = *head;
while (node)
{
if (i == idx - 1)
{
new_one->next = node->next;
node->next = new_one;
return (new_one);
}
i++;
node = node->next;
}
free(new_one);
return (NULL);
}
