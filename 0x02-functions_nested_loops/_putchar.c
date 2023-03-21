#include "main.h"
#include <unistd.h>

int _putchar(char name)
{
    return (write(1, &name, 1));
}