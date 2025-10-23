#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>



int main(){

    char arraybi[3][3] = {
                            {'a','b','c'},
                            {'d','e','f'},
                            {'g','h','i'}
                         };

    char procura;
    int valido;
    printf("Insira o valor a procurar: ");
    scanf("\n%c", &procura);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (procura == arraybi[i][j])
            {
                printf("Caractere encontrado na posição (%d,%d) do array", i+1,j+1);
                valido = 1;
            }
            else
            valido = 0;
            
        }
        printf("\n");        
    }
    if (valido == 0)
    {
        printf("Caractere não encontrado no array");
    }
    

    
    
    
     


return 0;
}