#include "main.h"

/**
 * binary_to_uint - start point
 * @b: input
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		num = num * 2 + (*b++ - '0');
	}
	return (num);
}
