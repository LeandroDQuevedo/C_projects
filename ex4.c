#include <stdio.h> 

float A;
float B;
float C;
float D;
float E;

int main()
{
    printf("insira a nota do aluno 1\n-");
    scanf( "%f", &A);
    printf("insira a nota do aluno 2\n-");
    scanf("%f", &B);
    printf("insira a nota do aluno 3\n-");
    scanf("%f", &C);
    printf("insira a nota do aluno 4\n-");
    scanf("%f", &D);
    printf("insira a nota do aluno 5\n-");
    scanf("%f", &E);
    
    float med_notas = ((A + B + C + D + E) / 5);
    float max_notas;
    int qnt_max_notas = 0;

    if (A >= B && A >= C && A >= D && A >= E)
    {
        max_notas = A;
        qnt_max_notas = qnt_max_notas + 1;
    }
    if (B >= A && B >= C && B >= D && B >= E)
    {
        max_notas = B;
        qnt_max_notas = qnt_max_notas + 1;
    }
    if (C >= A && C >= B && C >= D && C >= E)
    {
        max_notas = C;
        qnt_max_notas = qnt_max_notas + 1;
    }
    if (D >= A && D >= B && D >= C && D >= E)
    {
        max_notas = D;
        qnt_max_notas = qnt_max_notas + 1;
    }
    if(E >= A && E >= B && E >= C && E >= D)
    {
        max_notas = E;
        qnt_max_notas = qnt_max_notas + 1;
    }

    

    printf("A média das notas é %.2f\n", med_notas);
    printf("A maior nota é %.2f\n", max_notas);
    printf("A quantidade de alunos com a nota max é %d\n", qnt_max_notas);
}