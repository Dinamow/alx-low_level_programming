/*main*/
#include <stdio.h>
#include <string.h>

/**
 * 
*/
int main(char *argv[])
{
    if (strcmp(argv, "size32") == 0)
    {
        printf("Size of a char: 1 byte(s)\nSize of an int: 4 byte(s)\nSize of a long int: 4 byte(s)\nSize of a long long int: 8 byte(s)\nSize of a float: 4 byte(s)\n");
    }
    else if (strcmp(argv, "size64"))
    {
        printf("Size of a char: 1 byte(s)\nSize of an int: 4 byte(s)\nSize of a long int: 8 byte(s)\nSize of a long long int: 8 byte(s)\nSize of a float: 4 byte(s)\n");
    }
}
