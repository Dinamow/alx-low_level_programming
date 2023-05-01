#include <stdio.h>
#include <stdlib.h>
/**
 * main - print args in new line
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{int x, y, i;
if (argc == 1)
{
printf("0\n");
return (0);
}
else if (argc > 1)
{
x = 0;
for (i = 1; i < argc; i++)
{
if (*argv[i] >= 48 && *argv[i] <= 57)
{
y = atoi(argv[i]);
x = x + y;
}
else
{
printf("Error\n");
return (0);
}
}
}
printf("%d\n", x);
return (0);
}
