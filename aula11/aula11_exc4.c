#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>



int main(){

    char arraybi[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Insira o valor: ");
            scanf("\n%c", &arraybi[i][j]);
        }
        printf("\n");        
    }
    

    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             printf("%c ", arraybi[i][j]); 
        }
        printf("\n");        
    }
    
    
    
    
     


return 0;
}