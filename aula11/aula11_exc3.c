#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>



int main(){

    int arraybi[3][3] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}
                        };
    int arrayuni[9];
    int posicao = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            if (arraybi[i][j] % 2 == 0)
            {
                arrayuni[posicao] = arraybi[i][j];
                posicao++; 
            }
            
            
        }
    }

    for (int i = posicao; i < 9; i++)
    {
        arrayuni[posicao] = 0;
        posicao++;
    }
    

    printf("\nValores pares { ");
    for (int i = 0; i < 9; i++)
    {
        if (arrayuni[i] != 0)
        {   
            printf("%d, ", arrayuni[i]);
        }
        
    }
    printf("}");
    
    
    
     


return 0;
}