#include "main.h"
#include <unistd.h>

int print_last_digit(int c);
{
	int digit;

	digit = num % 10;

	if (digit < 0)
	{
		_putchar(-digit + '0');
		return (-digit);
	}
	else
	{
		_putchar(digit + '0');
		return (digit);
	}
}