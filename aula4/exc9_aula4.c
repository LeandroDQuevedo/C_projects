#include <stdio.h> 
#include <math.h>

float A;
float B;


int main()
{

    printf("insira a nota do grau A \n-");
    scanf("%f", &A);
    printf("insira a nota do grau B \n-");
    scanf("%f", &B);

   float GA = A * 0.33;
   float GB = B * 0.67;
   float nota = GA + GB;

   if (nota < 0)
    printf("Não existe nota negativa, ta mal assim?");
   else if (nota < 6)
   {
    printf("Vai precisar de grau C");
    printf("%0.2f", nota);
   }
   else
    printf("Passou com seus maravilhosos %0.2f pontos", nota);
   
   


}