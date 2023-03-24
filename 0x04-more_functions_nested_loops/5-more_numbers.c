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
do
{
    for(j = 0; j < 15; j++)
    _putchar(j + 48);
i++;
_putchar('\n');
} while (i <= 10);

}
