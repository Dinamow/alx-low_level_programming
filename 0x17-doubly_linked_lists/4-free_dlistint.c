#include "lists.h"

/**
 * free_dlistint - start point
 * @head: input
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		free(head->prev);
		head = head->next;
	}
	free(head->prev);
	free(head);
}
