#include "main.h"
#include <unistd.h>
/**
 * _isalpha - start point
 * take parameter int c
 * Return: 1 (lowercase or uppercase) , 0 (else)
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}

}
