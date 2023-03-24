#include "main.h"
 /**
  * more_numbers - start point
  * 2 loops
  * print
  * Return always 0(success)
 */

void more_numbers(void)
{
    int num, row, count
    for (row = 0; i < 10; row++)
    {
        for (count = 0; count < 15; count++)
        {
            num = count;
            if (count > 9)
            {
                _putchar(1 + 48);
                num = count % 10;
            }
            _putchar (num + 48);
        }
        _putchar('\n');
    }
    
}
