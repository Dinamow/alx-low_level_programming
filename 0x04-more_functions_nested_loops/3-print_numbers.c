#include "main.h"

/**
 * print_numbers - start point
 * loop 
 * Return always 0 (success)
*/

void print_numbers(void)
{
int c = '0';
do
{
_putchar(c);
c++;
} while (c <= '9');
_putchar('\n');
}
