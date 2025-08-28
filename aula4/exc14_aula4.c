#include <stdio.h> 
#include <math.h>

int a;
int b;
int c;


int main()
{

    printf("insira o número A\n-");
    scanf( "%d", &a);
    printf("insira o número B\n-");
    scanf( "%d", &b);
    printf("insira o número C\n-");
    scanf( "%d", &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c)
            printf("TRIÂNGULO EQUILÁTERO");
        else if (a != b && b != c && a != c)
            printf("TRIÂNGULO ESCALENO");
        else
            printf("TRIÂNGULO ISÓSCELES");
    }
    else
        printf("NÃO FORMA UM TRIÂNGULO");

   
  

}