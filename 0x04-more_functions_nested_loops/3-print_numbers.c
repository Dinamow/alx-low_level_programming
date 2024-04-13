#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 */
void print_numbers(void)
{
	int c = '0';

	do {
		_putchar(c);
		c++;
	} while (c <= '9');
	_putchar('\n');
}

