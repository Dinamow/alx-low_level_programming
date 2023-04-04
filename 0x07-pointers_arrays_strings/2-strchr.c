#include "main.h"

/**
 * _strchr - start point
 * @s: input
 * @c: input
 * Return: s + i (success), NULL (faild) 
*/

char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
if(s[i] == c)
{
return (s + i);
}
return('\0');
}
