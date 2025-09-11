#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>



float MediaNotas(float a, float b, float c){

    float med;
    char conceito;

    med = (a+b+c)/3;


    if (a > 0 && b > 0 && c > 0)
    {
        
        if (med > 9)
            conceito = 'A';
        else if (med > 7)
            conceito = 'B';
        else if (med > 4)
            conceito = 'C';
        else
            conceito = 'D';

    }

    return printf("%c", conceito);
   }


int main()
{
     MediaNotas(9, 9, 8);
      return 0;
}

