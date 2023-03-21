#include "main.h"
#include <unistd.h>
/**
 * main - start point
 * print 
 * Return: 0 (success)
*/
int _putchar(char name)
{
    return (write(1, &name, 1));
}