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
char char3 = 'f';
char char4 = 'r';
for (char1 = 'a'; char1 <= 'd'; char1++)
putchar(char1);
for (char3 = 'f'; char3 <= 'p'; char3++)
putchar(char3);
for (char4 = 'r'; char4 <= 'z'; char4++)
putchar(char4);
putchar(char2);
return (0);
}
