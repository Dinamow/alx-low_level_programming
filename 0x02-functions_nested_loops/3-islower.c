#include "main.h"
#include <unistd.h>

/**
 * _islower - checks for lowercase character
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
