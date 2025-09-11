#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>



int DetecPrimo(int num){

    if (num < 0)
    {
        return 0;
    }
    

    bool primo = true;
    int i = 2;


    while (i < num)
   {
   if (num % 2 == 0)
   {
      primo = false;
      break;
   }
   if (num % i == 0)
   {
      primo = false;
      break;
   }
   i++;
   }

    if (primo)
        return 1;
    else
        return 0;
    

   }


int main()
{
     DetecPrimo(7);
      return 0;
}

