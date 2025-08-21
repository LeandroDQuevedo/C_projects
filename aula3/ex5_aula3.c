#include <stdio.h> 
#include <math.h>

int A;
int B;



int main()
{

    printf("insira o número A\n-");
    scanf( "%d", &A);
    printf("insira o número B\n-");
    scanf( "%d", &B);

    if (B == 0)
        printf("Não é possível realizar divisão por 0!");
    else
    {
        int div = A / B;
        printf("O resultado da divisão é: %d", div);
    }
        
    

}