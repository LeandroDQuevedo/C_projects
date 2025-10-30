// Exercício 6: Construa um programa que leia uma palavra do teclado,
// mostre na tela o endereço da string onde ela foi armazenada e após,
// mostre na tela a terceira e a quarta letra dessa palavra. Use um
// ponteiro para armazenar os endereços dessas letras.


#include <stdio.h>

int main(){

char var[1024] = "Ma";
printf("Digite uma palavra: ");
scanf("%s", &var);

char *endereco = var;
char terceiraletra = *(endereco+2);
char quartaletra = *(endereco + 3);

printf("\nEndereço: %p", var);
printf("\nPalavra: %s", var);
printf("\nPalavra: %s", endereco);
printf("\nTerceira letra: %c\nQuarta letra: %c", terceiraletra, quartaletra);

return 0;
}