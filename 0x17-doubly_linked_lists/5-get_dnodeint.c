#include "lists.h"
/**
 * get_dnodeint_at_index - start point
 * @head: input
 * @index: input
 *
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *new;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	new = head;
	return (new);
}

