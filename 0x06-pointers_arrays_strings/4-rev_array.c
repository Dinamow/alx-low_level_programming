#include "main.h"

/**
 * reverse_array - start point
 * @a: input
 * @n: input
 * Return: always 0(success)
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
