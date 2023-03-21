#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - starting point
 * print alphabet
*/
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char c;
for (c = 'a'; c <= 'z'; c++)
_putchar(c);

_putchar('\n');
i++;
}
}
