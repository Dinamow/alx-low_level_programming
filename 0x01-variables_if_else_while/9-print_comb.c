#include <stdio.h>
/**
 * main - start point
 * some stuff
 * Return: 0 (success)
*/
int main(void)
{
int a = 0;
while (a < 10)
{
putchar(a + '0');
a++;
if (a == 10)
{
putchar('\n');
return (0);
}
putchar(',');
putchar(' ');
}
return (1);
}
