#include <stdio.h> 
#include <math.h>
#include <ctype.h>


int val;
int sum;
int medi;
int div;


int main()
{
   div = 0;
   val = 1;
   printf("Programa faz a média dos núemros positivos digitados, caso digite um negativo o programa ira executar a média\n-----------------------------------------------\n\n");




   while (val > 0)
   {
   
      printf("Digite números positivos\n-");
      scanf("%d", &val);

      if (val > 0)
      {
         sum += val;
         div++;
      }
      
      

   }

   medi = sum / div;

   printf("A média é: %d\n", medi);
}