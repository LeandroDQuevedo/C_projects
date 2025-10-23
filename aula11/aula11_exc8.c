#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

void exc8() {

   char senha[] = "senhaDificil789$";   
   char chute[100];
    int acertou = 0;
    int esgotado = 0;

    do  
    {
        printf("Digita senha");
        scanf("\n%s", &chute);
        if (strcmp(senha, chute) == 0)
        {
            printf("[Senha corrreta]");
            acertou = 1;
        }
        else {
            if (esgotado != 2)
            {
                printf("[Senha incorreta, tente novamente]");
            }
            
            
            esgotado++;
        }
        
        
    } while (acertou == 0 && esgotado != 3);
    if (esgotado == 3)
    {
        printf("[Número de tentativas esgotadas]");
    }
    
    

}

int main(){

    exc8();
    
    
     


return 0;
}