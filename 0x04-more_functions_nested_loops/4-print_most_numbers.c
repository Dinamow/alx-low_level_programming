#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, except 2 and 4
 */
void print_most_numbers(void)
{
	int c = '0';

	do {
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++;
	} while (c <= '9');
	_putchar('\n');
}
