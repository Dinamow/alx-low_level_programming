#include <stdio.h>
#include <stdlib.h>
/**
 * main - start point
 * @argc: input
 * @argv: input
 * print and calculate
 * Return: 0 (success),1 (failed)
*/
int main(int argc, char** argv)
{
int sum;
if (argc < 3)
{
printf("Error\n");
return (1);
}
else
sum = atoi(argv[argc - 2])* atoi(argv[argc - 1]);
printf("%d\n", sum);
return 0;
}
