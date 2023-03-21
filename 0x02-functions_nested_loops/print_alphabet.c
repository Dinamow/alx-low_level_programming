#include "main.h"
#include <unistd.h>

void print_alphabet(void)
{
    for(int i = 'a'; i <='z'; i++)
    _putchar('%c', i);
}