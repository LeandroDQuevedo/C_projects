#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>



int main(){

    int arraybi[3][3] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}
                        };

    int arrayinvertida[3][3];

    for (int i = 3; i > 0; i--)
    {
        for (int j = 0; j < 3; j++)
        {
            int val = arraybi[3-i][j];
            arrayinvertida[i-1][j] = val;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arraybi[i][j] = arrayinvertida[i][j];
        }
    }
    
    

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             printf("%d ", arraybi[i][j]); 
        }
        printf("\n");        
    }

   
   

    // for (int i = 0; i < 2; i++)
    // {
    //     arraybi[i]
    // }
    
     


return 0;
}