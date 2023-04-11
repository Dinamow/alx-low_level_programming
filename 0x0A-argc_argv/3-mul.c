#include <stdio.h>
#include <stdlib.h>

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
printf("%d", sum);
return 0;
}
