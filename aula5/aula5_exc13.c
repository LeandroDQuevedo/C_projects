#include <stdio.h> 
#include <math.h>
#include <ctype.h>


long val;
long fat;


int main()
{

   fat = 1;
   printf("Programa faz a fatorial do numero digitado\n-----------------------------------------------\n\n");

   printf("Digite um número positivo\n-");
   scanf("%ld", &val);


   while (val > 1)
   {
   
      fat = fat * val;
      val--;
   }



   printf("A fatorial é: %ld\n", fat);
}