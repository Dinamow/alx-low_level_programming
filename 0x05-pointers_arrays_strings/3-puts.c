#include "main.h"
/**
 * _puts - start point
 * @str: take input
 * print
 * Return always 0 (success)
*/
void _puts(char *str)
{
int i;
for(i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
