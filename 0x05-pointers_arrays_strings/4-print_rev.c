#include "main.h"
/**
 * print_rev - start point
 * @s: take input
 * rev chars
 * print rev chars
 * Return always 0 (sucess)
*/
void print_rev(char *s)
{
int i;
int chars;
for (i = 0; s[i] != '\0'; i++)
chars = i;
for (i = 0; chars != -1; chars--)
_putchar(s[chars]);
_putchar('\n')
}
