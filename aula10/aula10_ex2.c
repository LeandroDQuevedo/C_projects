#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


void um_a_cinco(){

    int onzenum[5];
    int tamanho = sizeof(onzenum) / sizeof(onzenum[0]);

    for (int i = 0; i < tamanho; i++)
    {
        onzenum[i] = i+1;
    }
    
    printf("\n");
    for (int i = 0; i < tamanho; i++)
    {
        if (i == 0)
        {
            printf("%d", onzenum[i]);
        }
        else
        {
            printf("-%d", onzenum[i]);
        }
        
        
    }
    
}


int main(){

    um_a_cinco();

return 0;
}