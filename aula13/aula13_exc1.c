// Exercício 1: Declare uma variável inteira e um ponteiro para inteiro.
// Atribua o endereço da variável ao ponteiro e imprima o valor da
// variável usando o ponteiro.

#include <stdio.h>
int main(){
int var = 10;
int *ponteiro = NULL;
ponteiro = &var;

printf("Valor do ponteiro é: %d\n", *ponteiro);

return 0;
}