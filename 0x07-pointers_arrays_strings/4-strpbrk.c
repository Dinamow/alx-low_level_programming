#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *c;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				c = &s[i];
				return (c);
			}
			j++;
		}
		i++;
	}
	return (0);
}
