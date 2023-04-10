#include "main.h"
#include <unistd.h>
/**
 * _islower - start point
 * take int c
 * return: 1 (lower), 0 (else)
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}

}
