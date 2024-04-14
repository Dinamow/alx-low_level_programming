#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase character
 * @c: input
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isdelimiter - checks if a character is a delimiter
 * @c: input
 * Return: 1 if c is a delimiter, 0 otherwise
 */
int isdelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
			return (1);
	}
	return (0);
}

/**
 * cap_string - start point
 * @s: input
 * Return: output
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int founddelimiter = 1;

	while (*s)
	{
		if (isdelimiter(*s))
		{
			founddelimiter = 1;
		}
		else if (_islower(*s) && founddelimiter)
		{
			*s -= 32;
			founddelimiter = 1;
		}
		else
		{
			founddelimiter = 0;
		}
		s++;
	}
	return (ptr);
}
