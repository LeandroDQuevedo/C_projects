#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


void c(){

    int soma = 0;
    int num = 0;
    int onzenum[10];
    int tamanho = sizeof(onzenum) / sizeof(onzenum[0]);

    for (int i = 0; i < 5; i++)
    {
        num += 1;
        onzenum[i] = num;

    }
    num = 0;
    for (int i = 5; i < 10; i++)
    {
        num += 10;
        onzenum[i] = num;
    }
    printf("\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", onzenum[i]);
    }
    
}


int main(){

    c();

return 0;
}