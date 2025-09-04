#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


int val;
bool primo = true;
int i;


int main()
{
   i = 2;

   printf("Programa faz a fatorial do numero digitado\n-----------------------------------------------\n\n");

   printf("Digite um número positivo\n-");
   scanf("%d", &val);


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
      printf("O número %d é primo\n", val);
   else
      printf("O número %d não é primo\n", val);
   
}