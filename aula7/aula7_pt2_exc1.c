#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


void printbit(int a){

    for (size_t i = 15; i == 0; i--)
    {   
        int bit;

        bit = 1 << i;
        
        if (a & bit)
            printf("1");
        else
            printf("0");
        
        
    }
    

}



int main(){

    int a;

    printf("Digite um número:  ");
    scanf("%d", &a);
    printbit(a);


return 0;
}