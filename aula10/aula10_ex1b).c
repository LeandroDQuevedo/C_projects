#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


void b(){

    int soma = 0;
    int num = 1;
    int onzenum[11];
    int tamanho = sizeof(onzenum) / sizeof(onzenum[0]);

    for (int i = 0; i < 11; i++)
    {
        num += -1 + soma;
        soma += 2;
        onzenum[i] = num;

    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d", onzenum[i]);
    }
    
}


int main(){

    b();

return 0;
}