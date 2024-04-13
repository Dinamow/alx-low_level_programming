#include <stdio.h>

/**
 * main - start point
 * some stuff
 * Return: 0 (success)
*/
int main(void)
{
	char char1 = 'z';
	char char2 = '\n';

	for (char1 = 'z'; char1 >= 'a'; char1--)
		putchar(char1);
	putchar(char2);
	return (0);
}
