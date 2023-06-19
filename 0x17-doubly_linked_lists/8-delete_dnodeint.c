#include "lists.h"
/**
 * delete_dnodeint_at_index - start point
 * @head: input
 * @index: input
 *
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *nextt, *prevv, *temp;

	temp = *head;
	for (i = 0; i < index; i++)
		temp = temp->next;
	nextt = temp->next;
	prevv = temp->prev;
	nextt->prev = prevv;
	prevv->next = nextt;
	free(temp);
	return (0);
}

