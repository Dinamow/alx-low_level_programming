#include "lists.h"
/**
 * dlistint_len - start point
 * @h: input
 *
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
