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
     int q;
     int nums[1000];

     srand(time(0));
     n = rand() - RAND_MAX / 2;
     int s = n;
     q = s;
     if (n > 0)
     {
          for(lenth = 0; s >= 1; lenth++)
          {
               s = n / ten;
               ten = ten * 10;
          }
          int repeat = lenth;
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
                    s = q;
                    int lol = 1;
                    for (int j = 0; lol >= 1; j++)
                    {
                         lol = s / (nums[i - 1] + (numbers * (j + 1)));
                         if(s / (nums[i - 1] + (numbers * (j + 1))) == 0)
                         {
                              if (repeat == 1)
                              {
                                   nums[i] = j;
                              }
                              
                              nums[i] = (nums[i - 1] + (j * numbers));
                         }
                    }                    
               }
               repeat = repeat - 1;
               numbers = 1;
               answer = nums[i];;
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
                    s = q;
                    for (int j = 0; lol <= -1; j++)
                    {
                         lol = s / (-nums[i - 1] + (numbers * (j + 1)));
                         if (s / (-nums[i - 1] + (numbers * (j + 1))) == 0)
                         {
                              if (repeat == 1)
                              {
                                 nums[i] = -j;
                                 break;  
                              }
                              
                              nums[i] = (nums[i - 1] + -(j * numbers));
                         }
                                                  
                    }                    
               }
               repeat = repeat - 1;
               numbers = 1;
               answer = nums[i];
          }

     }
     if (answer > 5)
     {
          printf("last digit of %d is %d and is greater than 5\n",q ,answer );
     }
     else if (answer > 0)
     {
          printf("last digit of %d is %d and is 0\n",q ,answer );
     }
     else if (answer < 6  && answer != 0)
     {
          printf("last digit of %d is %d and is less than 6 and not 0\n",q ,answer );
     }
     return (0);
}
