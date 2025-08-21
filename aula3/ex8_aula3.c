#include <stdio.h> 
#include <math.h>

float preco;



int main()
{

    printf("insira o preco do produto\n-");
    scanf( "%f", &preco);

    if (preco < 100)
    {
        preco = preco + preco * 0.1;
        printf("Preço reajustado com 10 %.2f", preco);
    }
    else if (preco < 300)
    {
        preco = preco + preco * 0.2;
        printf("Preço reajustado com 20 %.2f", preco);
    }
    else if (preco < 1000)
    {
        preco = preco + preco * 0.5;
        printf("Preço reajustado com 50 %.2f", preco);
    }
    else if (preco < 0)
    {
        printf("Valores negativos são invalidos");
    }
    
    
  

}