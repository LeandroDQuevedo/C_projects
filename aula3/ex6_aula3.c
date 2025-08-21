#include <stdio.h> 
#include <math.h>

int A;
int B;
int C;
int menor;


int main()
{

    printf("insira o número A\n-");
    scanf( "%d", &A);
    printf("insira o número B\n-");
    scanf( "%d", &B);
    printf("insira o número C\n-");
    scanf( "%d", &C);

    if (A <= B && A <= C)
        menor = A;
    if (B <= A && B <= C)
        menor = B;
    if (C <= A && C <= B)
        menor = C;

    printf("O menor valor é %d", menor);
  

}