#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


void printbit(int a){

       
    int bit;
    int maiorbit;
    int numshift;
    int mask;

    maiorbit = 1 << 31;
        
        
    for (size_t mask = 0; mask < 32; mask++){
        
    bit = a << mask;

    if(bit & maiorbit){
        numshift = mask;
        break;
    }

    }
          
    printf("Da pra shifitar %d", numshift);

}



int main(){

    int a;

    printf("Digite um número:  ");
    scanf("%d", &a);
    printbit(a);


return 0;
}