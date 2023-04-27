#include <unistd.h>
#include "lists.h"

size_t putchar(char name)
{
    return (write(1, &name, 1));
}
