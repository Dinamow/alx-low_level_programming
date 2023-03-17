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
int a = 0;
while (a < 10)
{
putchar(a + '0');
a++;
}
for (char1 = 'a'; char1 <= 'f'; char1++)
putchar(char1);
putchar(char2);
return (0);
}