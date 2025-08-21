#include <stdio.h> 
#include <math.h>

float A;
int B;



int main()
{

    printf("insira o número A\n-");
    scanf( "%f", &A);
    printf("insira o número B\n-");
    scanf( "%d", &B);

    float mult_AeB = A * B;
    float div_AeB = A / B;
    float sum = A + B;
    float sub = A - B;
    float expo = pow(A,B);

    printf("A multiplicação é %.2f\n", mult_AeB);
    printf("A divisão é %f porém com 2 casas é %.2f\n", div_AeB, div_AeB);
    printf("A adição é %.2f a subtração é %.2f\n", sum, sub);
    printf("A wxponenciação é %.2f\n", expo);


    

}