// Exercício 4: Declare um array de inteiros e use ponteiros para
// imprimir os elementos do array.


#include <stdio.h>


int main(){
int var[5] = {0,1,2,3,4};
int *ponteiro = var;
int range =  sizeof var / sizeof var[0];


for (int i = 0; i < range; i++)
{
    printf("\n\nNum: %d\n", *ponteiro);
    ponteiro++;
}

    





return 0;
}