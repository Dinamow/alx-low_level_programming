#include "main.h"
#include <unistd.h>

void print_alphabet_x10(void)
{
    for(int i = 0; i < 10; i++)
    {
        char c;
        for (c = 'a'; c <= 'z'; c++)
        _putchar(c);

        _putchar('\n');
    }
}