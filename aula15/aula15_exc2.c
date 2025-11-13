#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

char nomesobrenome(char nome[]){
    char primeironome[50];
    char sobrenome[50];
    int ordem = 0;


    for (int i = 0; i < 100; i++)
    {
        if (nome[i] == ' ')
            break;
        primeironome[i] = nome[i];
    }
    for (int i = 0; i < 100; i++)
    {
        
        if (nome[i] == ' ')
        {
            ordem = 0;
            i++;
        }

        sobrenome[ordem] = nome[i];
        ordem++;
        if (nome[i] == '\n')
            break;
        
        
    }
}

char removevogal(char string[]){
    for (int i = 0; i < 100; i++)
    {
        if (string[i] == 'a' || string[i] == 'A'
            || string[i] == 'e' || string[i] == 'E'
            || string[i] == 'i' || string[i] == 'I'
            || string[i] == 'o' || string[i] == 'O'
            || string[i] == 'u' || string[i] == 'U'
            )
        {
            string[i] = ' ';
        }
    }
    int pega = 0; 
    int posicao = 0;
    do
    {
        for (posicao = 0; posicao < 100; posicao++)
    {
        

        if (string[posicao] == ' ' && string[posicao+1] == ' ')
        {
            pega++;
        }
        if (string[posicao] == ' ')
        {
            string[posicao] == string[posicao+1+pega];
            string[posicao+1+pega] == ' ';
        }
        
        
        
    }
    } while (string[posicao] != '\n');
       
    
    return string;

}



int main(){

    char string[100];
    int palvras = 1;
    int tamanhopalavr = 0;

    printf("Insira a string com espaço: ");
    
    fgets(string, 100, stdin);

    
    for (size_t i = 0; i < 100 || string[i] == '\n'; i++)
    {
        if (string[i] == ' ')
            palvras++;
    }

    printf("Tem %d palavras", palvras);

    removevogal(string);
     


return 0;
}