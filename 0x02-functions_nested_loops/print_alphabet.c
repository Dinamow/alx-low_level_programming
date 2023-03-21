#include "main.h"
#include <unistd.h>

void print_alphabet(void)
{
    char char1;
    for(char1 = 'a'; char1 <='z'; char1++)
    _putchar(char1);
    _putchar('\n');
}