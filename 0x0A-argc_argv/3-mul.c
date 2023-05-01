#include <stdio.h>
#include <stdlib.h>
/**
 * main - print args in new line
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
int multi, x, y;
x = atoi(argv[1]);
y = atoi(argv[2]);
multi = x *y;
printf("%d\n", multi);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
