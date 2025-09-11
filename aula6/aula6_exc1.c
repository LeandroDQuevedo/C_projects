#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>



void exc1(){

    int x;

    printf("Insira o valor de X\n->");
    scanf("%d", &x);

    for (size_t i = 0; i < x; i++)
    {
        
        printf("%d", i + 1);
    }
    
   }


int main()
{
     exc1();
      return 0;
}

