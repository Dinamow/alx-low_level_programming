#include "lists.h"

/**
 * sum_listint - start point
 * @head: input
 *
 * Retrun: int
*/
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
