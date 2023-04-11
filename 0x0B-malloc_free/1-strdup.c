#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
char *n = malloc(str * 2);
if (n == 0 || str == 0)
{
return 0;
}
return(n);
}
