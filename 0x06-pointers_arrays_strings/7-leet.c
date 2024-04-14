#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @c: string to encode
 *
 * Return: encoded string
 */
char *leet(char *c)
{
	char *cp = c;
	char key[] = {'a', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

		while (*c)
		{
			for (i = 0; i < sizeof(key) / sizeof(char); i++)
			{
				if (*c == key[i] || key[i] + 32)
					*c = (char)(84 + value[i]);
			}
			c++;
		}
	return (cp);
}
