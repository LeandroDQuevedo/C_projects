#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

int qntsvzs(char x[3][3], char y) {

    int vezes = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (y == x[i][j])
            {
                vezes++;
            }
           
            
        }
}
    return vezes;

}

int main(){

    char lista[3][3] = {{'c','c','c'},{'c','a','c'},{'c','c','c'}};
    
    int printar = qntsvzs(lista, 'c'); 
    printf("\n%d", printar);
    
    
    
     


return 0;
}