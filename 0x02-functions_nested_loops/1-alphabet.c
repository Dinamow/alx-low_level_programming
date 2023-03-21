#include "main.h"
#include <unistd.h>
/**
 * main - start point
 * print
 * Return: 0 (success)
*/
void print_alphabet(void)
{
char c;
for(c = 'a'; c <= 'z'; c++)
_putchar(c);

_putchar('\n');
}
