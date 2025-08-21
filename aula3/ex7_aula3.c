#include <stdio.h> 
#include <math.h>

int preco;



int main()
{

    printf("insira o preco do produto\n-");
    scanf( "%d", &preco);

    if (preco <= 0)
    {
        printf("Preço Inválido");
    }
    else if (preco <= 30)
        printf("Preço baixo");
    else if (preco <= 50)
        printf("Preço médio");
    else
        printf("Preço Alto");
    
    
  

}