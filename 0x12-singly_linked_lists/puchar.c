#include <unistd.h>
#include "lists.h"

int putchar(char name)
{
    return (write(1, &name, 1));
}