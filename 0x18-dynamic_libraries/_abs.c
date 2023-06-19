#include "main.h"
#include <unistd.h>
/**
 * _abs - start point
 * take input
 * return the absolute value of input
*/
int _abs(int c)
{
if (c > 0)
{
return (c);
}
else
{
c = c * -1;
return (c);
}

}
