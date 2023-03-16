/* main.c */
#include <stdio.h>
#include <string.h>
/**
 * allocate storage for string
 * type string
 * return: 0 (success)
*/
int main(void)
{
	char str[100];
		strcpy(str, "\"Programming is like building a multilingual puzzle");
	puts(str);
	return (0);
}
