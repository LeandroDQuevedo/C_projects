// Exercício 2: Declare duas variáveis de tipos diferentes ( int e float) e
// imprima seus endereços de memória.

#include <stdio.h>
int main(){
int var = 10;
float var2 = 2.5;
int *ponteiroint = NULL;
float *ponteirofloat = NULL;

ponteiroint = &var;
ponteirofloat = &var2;

printf("Valor do ponteiro de inteiro é: %d\n", *ponteiroint);

printf("Valor do ponteiro de inteiro é: %0.2f\n", *ponteirofloat);

return 0;
}