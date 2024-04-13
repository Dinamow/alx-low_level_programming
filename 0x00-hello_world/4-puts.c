/* main.c */
#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * allocate storage for string
 * type string
 * Return: 0(success)
*/
int main(void)
{
	char str[100];
	strcpy(str, "\"Programming is like building a multilingual puzzle");
	puts(str);
	return (0);
}
