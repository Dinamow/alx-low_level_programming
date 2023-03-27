#include "main.h"
#include <unistd.h>
/**
 * swap_int - start point
 * @a: take intger as input
 * @b: take another intger as input
 * swap values
 * Return always 0 (success)
*/

void swap_int(int *a, int *b)
{
int c;
c = &a;
*a = &b;
*b = c;
}
