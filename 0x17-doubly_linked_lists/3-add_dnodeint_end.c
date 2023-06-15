#include "lists.h"
/**
 * add_dnodeint_end - start
 * @head: input
 * @n: input
 *
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;
	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (temp);
	new->n = n;
	new->next = NULL;
	if (temp != NULL)
	{
		while (temp)
		{
			if (temp->next == NULL)
			{
				new->prev = temp;
				temp->next = new;
				return (new);
			}
			temp = temp->next;
		}
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	return (new);
}

