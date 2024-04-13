#include "main.h"
#include <unistd.h>

/**
 * _abs - computes the absolute value of an integer
 * @c: The integer to print
 *
 * Return: The absolute value of the integer
 */
int _abs(int c)
{
	if (c > 0)
		return (c);
	c = c * -1;
	return (c);
}
