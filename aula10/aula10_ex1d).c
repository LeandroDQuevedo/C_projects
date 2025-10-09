#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


void d(){

    int soma = 0;
    int num = 3;
    int onzenum[10];
    int tamanho = sizeof(onzenum) / sizeof(onzenum[0]);

    for (int i = 0; i < tamanho; i++)
    {
        num += soma;
        onzenum[i] = num;
        soma = 2 + i * 2 -1;
    }
    
    printf("\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", onzenum[i]);
    }
    
}


int main(){

    d();

return 0;
}