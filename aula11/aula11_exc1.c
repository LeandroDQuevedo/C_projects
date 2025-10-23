#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>




int main(){

    int arraybi[3][3] = {296,1,2,2,3,4,5,5,5};

    for (int i = 2; i > -1; i--)
    {
        for (int j = 2; j > -1; j--)
        {
            printf("\n%d", arraybi[i][j]);
        }
    }
     


return 0;
}