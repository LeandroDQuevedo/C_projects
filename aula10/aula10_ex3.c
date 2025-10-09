#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


void um_a_cinco(){

    int d[10];
    int tamanho = sizeof(d) / sizeof(d[0]);
    int num = 0;
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor da posição %d:", i);
        scanf("%d", &num);
        d[i] = num;
    }
    
    printf("\n");
    for (int i = 0; i < tamanho; i++)
    {
        if (i == 0)
        {
            printf("%d", d[i]);
        }
        else
        {
            printf("-%d", d[i]);
        }
        
        
    }
    
}


int main(){

    um_a_cinco();

return 0;
}