#include <stdio.h> 
#include <math.h>
#include <ctype.h>

int i;
int A;
int sum;
int rep;


int main()
{
   i = 0;

   printf("Quantos números irá digitar?\n-");
   scanf("%d", &rep);

   while (i++<rep)
   {
    
   printf("Digite um int\n");
   scanf("\n%d", &A);

   if (A > 0)
      printf("Positivo\n");
   else if (A < 0)
      printf("Negativo\n");
   else
      printf("Zero\n");
   
   

   }

   
}