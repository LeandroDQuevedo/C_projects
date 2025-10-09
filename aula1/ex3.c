#include <stdio.h> 

int A;
int B;
int C;


int main()
{
    printf("insira o valor do trabalho\n-");
    scanf( "%d", &A);
    printf("insira o valor do prova\n-");
    scanf("%d", &B);
    printf("insira o valor do teste\n-");
    scanf("%d", &C);
    float nota = (A * 0.1 + B * 0.6 + C * 0.3);
    printf("A nota é %.2f\n", nota);
}
