#include "main.h"

void print_most_numbers(void)
{
int c = '0';
do
{
    if (c != '2' && c != '4')
    {
    _putchar(c);
    }
    c++;
} while (c <= '9');
_putchar('\n');
}
