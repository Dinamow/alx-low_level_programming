#include "main.h"
#include <unistd.h>

/**
 * _putchar - a Function that ...
 * @name: Description of name.
 * Return: Description of the return value.
 */
int _putchar(char name)
{
	return (write(1, &name, 1));
}

