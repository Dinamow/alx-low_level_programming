#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
int i;
for (i = 0; i < argc; i++)
{
    if (atoi(argv[i]) != 0)
    {
        printf("Error");
        return 1;
    }
    
}
return 0;
}