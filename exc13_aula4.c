#include <stdio.h> 
#include <math.h>

int peso;
float h;
float IMC;



int main()
{

    printf("insira a seu peso\n-");
    scanf( "%d", &peso);
    printf("insira a sua altura\n-");
    scanf( "%f", &h);
    
    IMC = peso / (h * h);

    if (IMC < 18.5)
        printf("Abaixo do peso");
    else if (IMC < 25)
        printf("Peso normal");
    else if (IMC < 30)
        printf("Pré-obesidade");
    else if (IMC < 35)
        printf("Obesidade Grau 1");
    else if (IMC < 40)
        printf("Obesidade Grau 2");
    else
        printf("Obesidade Grau 3");
    

    


   
    

}