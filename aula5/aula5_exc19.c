#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


char val;
int i;
int min;
int max;
int mult;
int qntd_vog;


int main()
{
   qntd_vog = 0;

   for (size_t i = 0; i < 10; i++)
   {
      printf("Digite um char em maiusculo\n-");
      scanf("\n%c", &val);

      toupper(val);

      if (val == 'A' || val == 'E' || val == 'I' || val == 'O' || val == 'U')
      {
         qntd_vog ++;
      }
      
   }

   printf("Foi digitado %d vogais", qntd_vog);
   
   
}

