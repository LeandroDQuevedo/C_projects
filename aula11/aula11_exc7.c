#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

void exc7() {

    char lista[3][3] = {{'c','c','c'},{'c','a','c'},{'c','c','c'}};
    int quantidadecorerta = exc6(lista, 'c');
    
    printf("O char é C\n Adivinhe:");


    int chute;
    do
    {
        printf("Chuta a quantidade");
        scanf("%d", &chute);
        if (chute < quantidadecorerta)
        {
            printf("Mais");
        }
        else
            printf("Menos");
        
    } while (chute != quantidadecorerta);
        printf("Quantidade correta");
    
    return 0;

}

int main(){

    char lista[3][3] = {{'c','c','c'},{'c','a','c'},{'c','c','c'}};
    
    int printar = qntsvzs(lista, 'c'); 
    printf("\n%d", printar);
    
    
    
     


return 0;
}