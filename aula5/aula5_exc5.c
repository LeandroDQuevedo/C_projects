#include <stdio.h> 
#include <math.h>
#include <ctype.h>

int i;
char A;
int numA;


int main()
{
   i = 0;

   while (i<10)
   {
    
    
   printf("Digite um caractere\n");
   scanf("\n%c", &A);
   toupper(A);

   if (A == 'A')
   {
      numA ++;
   }
    
    
   i ++;
   }

   printf("O números de letra A é igual a: %d", numA);
   

}