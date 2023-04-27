#include "main.h"
#include <unistd.h>

int putchar(char name)
{
    return (write(1, &name, 1));
}