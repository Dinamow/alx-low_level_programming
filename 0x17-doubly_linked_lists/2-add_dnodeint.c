#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;
	temp = *head;
	new = malloc(sizeof(dlistint_t));

	if(new != NULL)
	{
		new->prev = NULL;
		new->n = n;
		new->next = temp;
		if(temp != NULL)
			temp->prev = new;
		*head = new;
	}
	return (new);
}
