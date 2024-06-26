#include "lists.h"

/**
 * listint_len - start point
 * @h: input
 *
 * Return: the size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
