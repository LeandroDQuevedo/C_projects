// Exercício 3: Escreva uma função que troca os valores de duas
// variáveis inteiras usando ponteiros. Utilize a seguinte assinatura para
// sua função:
// void trocaValores(int *a, int *b){
// //seu código

// }
#include <stdio.h>

void trocaValores(int *a, int *b){

    int x = *a;

    *a = *b;
    *b = x;

}


int main(){
int var = 10;
int var2 = 25;
int *ponteiro1 = NULL;
int *ponteiro2 = NULL;

ponteiro1 = &var;
ponteiro2 = &var2;

printf("\nAntes\n ------------\nValor do ponteiro 1 é: %d\n", *ponteiro1);

printf("Valor do ponteiro 2 é: %d\n\n", *ponteiro2);

trocaValores(ponteiro1, ponteiro2);

printf("Depois\n ------------\nValor do ponteiro 1 é: %d\n", var);

printf("Valor do ponteiro 2 é: %d\n", var2);


return 0;
}