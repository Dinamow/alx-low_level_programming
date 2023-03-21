#include "main.h"
#include <unistd.h>

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
