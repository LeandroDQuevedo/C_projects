#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>



int somaPositivos(int x, int y){

    if (x > 0 && y > 0)
    {
        int soma = x + y;
        return soma;
    }
    else
        return -1;

   }

float divide(float x, float y){
    if (y == 0)
    {
        printf("Erro: divisor = 0");
        return 0;
    }

    float div;
    div = x/y;

    return div;
}

char verificaTriangulo(int x, int y, int z){

    char tipo;

    if (x < y+z && y < x+z && z < x+y)  
    {
        if ( x != y && y != z && z != x )
            tipo = 'E';
        else if (x == y && x == z)
            tipo = 'Q';
        else
            tipo = 'I';

        return tipo;
    }

    return printf("Não é um triagulo");
    
}

char verificaIdade(int x){
    char faixaet;
    
    if (x < 0)
    {
        faixaet = 'E';
    }
    else if (x <= 12)
    {
        faixaet = 'K';
    }
    else if (x <= 18)
    {
        faixaet = 'T';
    }
    else if (x <= 120)
    {
        faixaet = 'A';
    }
    else
        faixaet = 'E';


    return faixaet;  
}

void contaAte300(int x){

    for (size_t i = x; i < 300; i++){
        printf("%d", i);
    }

}

int verificaPrimo(int num){

    if (num < 0)
    {
        return 0;
    }
    

    bool primo = true;
    int i = 2;


    while (i < num)
   {
   if (num % 2 == 0)
   {
      primo = false;
      break;
   }
   if (num % i == 0)
   {
      primo = false;
      break;
   }
   i++;
   }

    if (primo)
        return 1;
    else
        return 0;
    
   }

int achaMaior(int x, int y, int z){
    if (x > y && x > z)
    {
        return x;
    }
    if (y > x && y > z)
    {
        return y;
    }
    if (z > y && z > x)
    {
        return z;
    }
}

void imprimePares(int x){
    for (size_t i = 0; i < x; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", i);
        }
        
    }
    
}





int main()
{
    bool menuexit = true;
    int menu;
    int val1;
    int val2;
    int val3;

    printf("\n\n\nBem vindo ao menu de funções\nEscolha uma função a realizar\n------------------------\n");

while (menuexit)
{

    printf("\n1) Soma de dois valores positivos\n");
    printf("2) Divisão de dois valores\n");
    printf("3) Verifica triangulo\n");   
    printf("4) Verifica idade\n");
    printf("5) Conta de x -> 300\n");
    printf("6) Verifica primo\n");
    printf("7) Acha o maior número entre 3 valores\n");
    printf("8) Imprime todos os pares até x\n");
    scanf("%d", &menu);



    for (size_t i = 1; i < 8; i++)
    {
        if (menu == i){
            menuexit = true;
           break;
        }
           
        else
            menuexit = false;
        
    }
    
    if (menu == 1)
    {
        printf("Insira o valor 1\n->");
        scanf("%d", &val1);
        printf("Insira o valor 2\n->");
        scanf("%d", &val2);
        printf("%d", somaPositivos(val1, val2));
    }
    else if (menu == 2)
    {
        printf("Insira o valor 1\n->");
        scanf("%d", &val1);
        printf("Insira o valor 2\n->");
        scanf("%d", &val2);
        printf("%0.2f", divide(val1, val2));
    }
    else if (menu == 3)
    {
        printf("Insira o valor 1\n->");
        scanf("%d", &val1);
        printf("Insira o valor 2\n->");
        scanf("%d", &val2);
        printf("Insira o valor 3\n->");
        scanf("%d", &val3);
        printf("%c", verificaTriangulo(val1, val2, val3));
    }
    else if (menu == 4)
    {
        printf("Insira a idade\n->");
        scanf("%d", &val1);
        printf("%c", verificaIdade(val1));        
    }
    else if (menu == 5)
    {
        printf("Insira o ponto de partida\n->");
        scanf("%d", &val1);
        contaAte300(val1);
    }
    else if (menu == 6)
    {
        printf("Insira o número pra ver se é primo\n->");
        scanf("%d", &val1);
        printf("%d", verificaPrimo(val1));        
    }
    else if (menu == 7)
    {
        printf("Insira o valor 1\n->");
        scanf("%d", &val1);
        printf("Insira o valor 2\n->");
        scanf("%d", &val2);
        printf("Insira o valor 3\n->");
        scanf("%d", &val3);
        printf("%d", achaMaior(val1, val2, val3));        
    }
    else if (menu == 8)
    {
        printf("Insira o final\n->");
        scanf("%d", &val1);
        imprimePares(val1);
    }
}    
    
    
    
    
    
    
    
        
        
        return 0;
}

