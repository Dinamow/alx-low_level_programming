#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *reset;
	reset = *head;

	new->next = NULL;
	while (reset)
	{
		if(reset->next == NULL)
		{
			new->prev = reset;
			reset->next = new;
			return (*head);
		}
		reset = reset->next;
	}
	return (NULL);
}
