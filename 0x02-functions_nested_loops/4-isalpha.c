#include "main.h"
#include <unistd.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
