// Exercício 7: Escreva uma função que recebe uma string e um
// caractere, e retorna o número de vezes que o caractere aparece na
// string, usando ponteiros. Utilize a seguinte assinatura para sua
// função:
// int ocorrenciasCaracter (char *texto, char carac) {
// //seu código
// }


#include <stdio.h>

int ocorrenciasCaracter (char *texto, char carac) {
    int qntcrt = 0;
    int range = 0;
    do
    {
        range++;
    } while (*(texto + range) != '\0');

    for (int i = 0; i < range; i++)
    {
        char teste = *(texto+i);
        if ( teste == carac)
        {
            qntcrt++;
        }
        
    }
    
return qntcrt;
}


int main(){

char var[1024] = "";
char carac;
printf("Digite uma palavra: ");
scanf("%s", &var);
printf("\nDigite um caracter: ");
scanf("\n%c", &carac);

int *texto = var;

int qntd = ocorrenciasCaracter(texto, carac);
printf("\n\n%d", qntd);

return 0;
}