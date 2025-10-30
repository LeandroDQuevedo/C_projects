#include <stdio.h>
int main(){
int var = 10;
int var2 = 15;
int *ponteiro = NULL;
ponteiro = &var;
printf("Valor do ponteiro é: %p\n", ponteiro);

printf("Valor do ponteiro é: %p\n", var);

printf("Valor do ponteiro é: %p\n", var2);

printf("Valor do ponteiro é: %d\n", var);

printf("Valor do ponteiro é: %d\n", ponteiro);
return 0;
}