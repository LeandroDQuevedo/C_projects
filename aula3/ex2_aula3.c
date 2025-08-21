#include <stdio.h> 
#include <math.h>

int A;
int B;
int C;


int main()
{

    printf("insira o número A\n-");
    scanf( "%d", &A);
    printf("insira o número B\n-");
    scanf( "%d", &B);
    printf("insira o número C\n-");
    scanf( "%d", &C);

    int delta = pow(B,2) - (4*A*C);
    int raiz = sqrt(delta);
    int X1 = (-B + raiz) / (2*A);
    int X2 = (-B - raiz) / (2*A);


    printf("O delta é %d\n", delta);
    printf("X1 é %d e X2 é %d\n", X1, X2);
  

}