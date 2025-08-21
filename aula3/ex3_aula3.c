#include <stdio.h> 
#include <math.h>

int A;


int main()
{

    printf("insira o número \n-");
    scanf("%d", &A);

   if (A % 2 == 0)
    printf("Seu número: %d é par", A);
   else
    printf("Seu número: %d é ímpar", A);

}