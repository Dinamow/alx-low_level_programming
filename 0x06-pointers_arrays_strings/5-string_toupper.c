#include "main.h"

/**
 * string_toupper - start point
 * @char *: input
 * Return: char*
*/

char *string_toupper(char *)
{
int i = 0;
for (i = 0; str[i] != '\0'; i++)
{
    if (str[i] >= 97 && str[i] <= 122)
        str[i] = str[i] - 32;
}
return (str);
}
