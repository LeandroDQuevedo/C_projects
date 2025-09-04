#include <stdio.h> 
#include <math.h>
#include <ctype.h>

int i;
int sum;


int main()
{
   
   while (i++<198)
      sum += i;

   printf("Soma: %d", sum);

}