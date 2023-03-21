#include "main.h"
#include <unistd.h>
/**
 * _islower - start point
 * check the input c
 * return: 1 (lower)
 * return: 0 (else)
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
