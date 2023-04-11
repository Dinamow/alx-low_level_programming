#include <stdio.h>
/**
 * main - start point
 * @argc: input
 * @argv: input
 * print
 * Return: always 0 (success)
*/
int main(int argc, char** argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n",argv[i]);
}
return 0;
}
