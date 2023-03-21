#include "main.h"
#include <unistd.h>
/**
 * _islower - start point
 * checks
 * if return: 1 (lower)
 * if return: 0 (else)
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}else
{
return (0);
}

}
