#include "main.h"
 /**
  * more_numbers - start point
  * 2 loops
  * print
  * Return always 0(success)
 */

void more_numbers(void)
{
int i, j;
i = 0;
while (i < 10)
{
for(j = 0; j < 15; j++)
    _putchar(j + '0');
_putchar('\n');
i++;
}

}
