#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


int val;
int i;
int min;
int max;
int mult;


int main()
{
   printf("Digite o valor da val\n-");
   scanf("%d", &val);
   

   
   for (size_t i = 1; i < 11; i++)
   {
      mult = val * i;
      printf("%d * %d = %d\n", i, val, mult);
   }
   
   
}