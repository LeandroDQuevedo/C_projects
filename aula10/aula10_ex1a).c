#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


void a(){

       
    int bit;
    int zeroadez[10];
    int numadd = 0;

    for (int i = 10; i > 0; i--)
    {
        numadd += 1;
        zeroadez[i-1] = numadd; 
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", zeroadez[i]);
    }
    
}


int main(){

    a();

return 0;
}