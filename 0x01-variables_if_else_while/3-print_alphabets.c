#include <stdio.h>
/**
 * main - start point
 * some stuff
 * Return: 0 (success)
*/
int main(void)
{
	char char1 = 'a';
	char char2 = '\n';
	char char3 = 'A';

	for (char1 = 'a'; char1 <= 'z'; char1++)
		putchar(char1);
	for (char3 = 'A'; char3 <= 'Z'; char3++)
		putchar(char3);
	putchar(char2);
	return (0);
}
