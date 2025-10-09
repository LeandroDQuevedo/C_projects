#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


void printstring(){

    char d[50];
    int tamanho = sizeof(d) / sizeof(d[0]);
    int num = 0;
    int qntchar = 0;
    printf("Coloque a frase que tu quer:");
    scanf("%49s", d);
    for (int i = 0; i < tamanho; i++)
    {
        if (d[i] == '\0')
            break;
        else
            qntchar++;
    }
    printf("Quantidade de caracteres é %d", qntchar);
    
}


int main(){

    printstring();

return 0;
}