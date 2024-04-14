#include "main.h"

/**
 * get_bit - start point
 * @n: input
 * @index: input
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
