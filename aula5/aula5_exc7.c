#include <stdio.h> 
#include <math.h>
#include <ctype.h>

int i;
int A;
int sum;


int main()
{
   i = 0;

   while (i++<10)
   {
    
   printf("Digite um int\n");
   scanf("\n%d", &A);
   sum += A;

   }

   printf("A soma é: %d", sum);
}