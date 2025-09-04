#include <stdio.h> 
#include <math.h>
#include <ctype.h>

int i;
int A;
int val1;
int val2;
int min;
int max;
int range;
int sumpar;
int sumimp;


int main()
{
   i = 0;
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
   
   
   i = min;

   while (i<max)
   {
   
   if (i % 2 == 0)
      sumpar += i;
   else
      sumimp += i;

   i++;
   }

   printf("Soma par: %d\n", sumpar);
   printf("Soma impar: %d\n", sumimp);
}