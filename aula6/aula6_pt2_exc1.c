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


float diveide(int x, int y){
    if (y = 0)
    {
        printf("Erro: divisor = 0");
        return 0;
    }

    float div = x/y;

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
     DetecPrimo(7);
      return 0;
}

