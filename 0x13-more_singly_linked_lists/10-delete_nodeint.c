#include "lists.h"

/**
 * delete_nodeint_at_index - start point
 * @head: input
 * @index: input
 *
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *before;
	unsigned int i = 0;

	if (!head || !*head)
	{
		return (-1);
	}
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			before->next = node->next;
			free(node);
			return (1);
		}
		i++;
		before = node;
		node = node->next;
	}
	return (-1);
}
