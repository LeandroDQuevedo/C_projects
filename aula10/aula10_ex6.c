#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>


void printstring(){

    char string1[50];
    char string2[50];
    char string3[50];
    int tamanho = sizeof(string1) / sizeof(string1[0]);
    printf("Coloque a frase 1 que tu quer:");
    scanf("%49s", string1);
    printf("Coloque a frase 2 que tu quer:");
    scanf("%49s", string2);

    strcat(string3, string1);
    strcat(string3, string2);

    printf("String 3 concatenada %s\n", string3);
    
}


int main(){

    printstring();

return 0;
}