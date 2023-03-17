#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - start point
 * get n value
 * doing some math to get answer
 * Return: 0 (success)
 */
int main(void)
{
     int n;
     int lenth;
     int ten = 10;
     int numbers = 1;
     int copy = 0;
     int lol = -1;
     int answer;

     srand(time(0));
     n = rand() - RAND_MAX / 2;
     int N;
     N = s;
     int s = n;
     if (n > 0)
     {
          for(lenth = 0; s >= 1; lenth++)
          {
               s = n / ten;
               ten = ten * 10;
          }
          int repeat = lenth;
          int nums[lenth];
          for (int i = 0; i < lenth; i++)
          {
               s = n;
               for (int j = 0; j < repeat - 1; j++)
               {
                    numbers = numbers * 10;
               }
               if (i == 0)
               {
                    for (int j = 0; s > 1; j++)
                    {
                         int s1 = s;
                         s = s / (numbers * (j + 1));
                         if (s == 0)
                         {
                              nums[i] = s1 * numbers;
                         }
                    }
               }
               else
               {
                    s = N;
                    int lol = 1;
                    for (int j = 0; lol >= 1; j++)
                    {
                         lol = s / (nums[i - 1] + (numbers * (j + 1)));
                         if(s / (nums[i - 1] + (numbers * (j + 1))) == 0)
                         {
                              nums[i] = (nums[i - 1] + (j * numbers));
                         }
                    }                    
               }
               repeat = repeat - 1;
               numbers = 1;
               nums[i] = answer;
          }
     }
     else if (n < 0)
     {
          for(lenth = 0; s <= -1; lenth++)
          {
               s = n / ten;
               ten = ten * 10;
          }
          int repeat = lenth;
          int nums[lenth];
          for (int i = 0; i < lenth; i++)
          {
               s = n;
               for (int j = 0; j < repeat - 1; j++)
               {
                    numbers = numbers * 10;
               }
               if (i == 0)
               {
                    for (int j = 0; s <= -1; j++)
                    {
                         int s1 = s;                        
                         s = s / (numbers * (j + 1));
                         if (s == 0)
                         {
                              nums[i] = s1 * numbers;
                         }
                    }
               }
               else
               {
                    int lol = -1;
                    s = N;
                    for (int j = 0; lol <= -1; j++)
                    {
                         lol = s / (-nums[i - 1] + (numbers * (j + 1)));
                         if (s / (-nums[i - 1] + (numbers * (j + 1))) == 0)
                         {
                              nums[i] = (nums[i - 1] + -(j * numbers));
                         }
                                                  
                    }                    
               }
               repeat = repeat - 1;
               numbers = 1;
               nums[i] = answer;
          }

     }
     if (answer > 5)
     {
          printf("last digit of %d is %d and is greater than 5\n",N ,answer );
     }
     else if (answer > 0)
     {
          printf("last digit of %d is %d and is 0\n",N ,answer );
     }
     else if (answer < 6  && answer != 0)
     {
          printf("last digit of %d is %d and is less than 6 and not 0\n",N ,answer );
     }
     return (0);
}

