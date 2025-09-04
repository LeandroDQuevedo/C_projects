#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


int val;
bool primo = true;
int i;
int sum;


int main()
{
   i = 2;
   val = 1;
   sum = -1;


   while (val < 100)
   {
      i = 2;
      primo = true;
      while (i < val)
      {
         if (val % 2 == 0)
         {
            primo = false;
            break;
         }
         if (val % i == 0)
         {
            primo = false;
            break;
         }
         i++;
      }

      if (primo)
      {
         sum += val;
         printf("%d", val);
      }
      
      val++;
   }
   


   


   printf("\n\n\n%d", sum);
   
}