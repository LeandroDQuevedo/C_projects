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

    if (A == B)
    {
        printf("Os valores são iguais");
    }
    else if (A > B)
    {
        printf("O número %d é maior", A);
    }
    else
        printf("O número %d é maior", B);
    
    

  

}