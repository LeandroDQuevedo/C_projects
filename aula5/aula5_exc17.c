#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


int val1;
int val2;
int i;
int min;
int max;


int main()
{
   printf("Digite o valor da val1\n-");
   scanf("%d", &val1);
   printf("Digite valor da val2\n-");
   scanf("%d", &val2);


   if (val1 < 0 || val2 < 0)
   {
      printf("não pode valor negativo");
   }
   else if (val1 > val2)
   {
      min = val2;
      max = val1;
   }
   else if (val1 < val2)
   {
      min = val1;
      max = val2;
   }


   
   for (size_t i = min + 1; i < max; i++)
   {
      printf("%d\n", i);
   }
   
   
}