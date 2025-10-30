// Exercício 5: Escreva uma função que recebe um ponteiro para um
// array de inteiros e seu tamanho, e retorna a soma dos elementos do
// array. Tente usar ponteiros também dentro do laço, no momento de
// pegar a informação do array e acumular na variável que armazena a
// soma.


#include <stdio.h>

int somaElement(int *a, int range){
    int soma = 0;
    int *ponteiro = a;

    for (int i = 0; i < range; i++)
    {
        soma += *ponteiro;
        ponteiro++;
    }

    return soma;
}


int main(){
int var[5] = {0,1,2,3,4};
int *ponteiro = var;
int range =  sizeof var / sizeof var[0];

int soma = somaElement(ponteiro, range);

printf("A soma é igual a: %d", soma);

return 0;
}