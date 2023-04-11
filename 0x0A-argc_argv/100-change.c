#include <stdio.h>
#include <stdlib.h>
/**
 * main - start point
 * @argc: input
 * @argv: input
 * calculate
 * Return: Always 0 (success)
*/
int main(int argc, char** argv)
{
    if (argc == 2)
    {
        int i, cent = 0, money = atoi(argv[1]);
        int cents[] = {25, 10, 5, 2, 1};
    
        for (i = 0; i < 5; i++)
        {
            if (money >= cents[i])
            {
                cent += money / cents[i];
                money = money % cents[i];
                if (money % cents[i] == 0)
                {
                    break;
                }
            }
        }
        printf("%d\n", cent);
    }
    else
    {
        printf("Error\n");
        return (1);
    }
    return 0;
}
