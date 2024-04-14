#include "main.h"

/**
 * _strcat - start point
 * @dest: input
 * @src: input
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
