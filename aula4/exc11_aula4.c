#include <stdio.h> 
#include <math.h>

int qntd;
float preco;


int main()
{

    printf("Bora comprar leite! \n ------------------- \n Qual o preço \n-");
    scanf("%f", &preco);
    printf("Quantos deseja?\n-");
    scanf("%d", &qntd);
    
    float compra = preco * qntd;


    printf("Sua compra ficou no valor total de: R$%0.2f", compra);



}