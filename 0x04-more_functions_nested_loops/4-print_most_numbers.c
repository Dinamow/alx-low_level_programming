#include "main.h"
/**
 * print_most_numbers - start point 
 * get value called c
 * print a;; numbers except 2,4
 * Return always 0 (success)
*/
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
