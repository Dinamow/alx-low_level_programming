#include "lists.h"
/**
 * print_dlistint - start point
 * @h:input
 *
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while(h)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}

