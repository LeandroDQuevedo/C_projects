#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

void exc0(){

    int arraybi[3][3] = {296,1,2,2,3,4,5,5,5};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\n%d", arraybi[i][j]);
        }
    }

}

void exc1(){

    int arraybi[3][3] = {296,1,2,2,3,4,5,5,5};

    for (int i = 2; i > -1; i--)
    {
        for (int j = 2; j > -1; j--)
        {
            printf("\n%d", arraybi[i][j]);
        }
    }
     

}

void exc2(){
    int arraybi[3][3] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}
                        };


    printf("\n\n------------------------\nExercicio 2\nDefault\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             printf("%d ", arraybi[i][j]); 
        }
        printf("\n");        
    }


    int arrayinvertida[3][3];

    for (int i = 3; i > 0; i--)
    {
        for (int j = 0; j < 3; j++)
        {
            int val = arraybi[3-i][j];
            arrayinvertida[i-1][j] = val;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arraybi[i][j] = arrayinvertida[i][j];
        }
    }

    printf("\nLinha invertida\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             printf("%d ", arraybi[i][j]); 
        }
        printf("\n");        
    }

}

void exc3(){

    int arraybi[3][3] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}
                        };
    int arrayuni[9];
    int posicao = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            if (arraybi[i][j] % 2 == 0)
            {
                arrayuni[posicao] = arraybi[i][j];
                posicao++; 
            }
            
            
        }
    }

    for (int i = posicao; i < 9; i++)
    {
        arrayuni[posicao] = 0;
        posicao++;
    }
    

    printf("\n\n------------------------\nExercicio 3\nValores pares { ");
    for (int i = 0; i < 9; i++)
    {
        if (arrayuni[i] != 0)
        {   
            printf("%d, ", arrayuni[i]);
        }
        
    }
    printf("}");

}

void exc4(){

    char arraybi[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Insira o valor: ");
            scanf("\n%c", &arraybi[i][j]);
        }
        printf("\n");        
    }
    

    printf("\n\n------------------------\nExercicio 4\nChar");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
             printf("%c ", arraybi[i][j]); 
        }
        printf("\n");        
    }
}

void exc5(){

     char arraybi[3][3] = {
                            {'a','b','c'},
                            {'d','e','f'},
                            {'g','h','i'}
                         };

    char procura;
    int valido;
    printf("Insira o valor a procurar: ");
    scanf("\n%c", &procura);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (procura == arraybi[i][j])
            {
                printf("Caractere encontrado na posição (%d,%d) do array", i+1,j+1);
                valido = 1;
            }
            else
            valido = 0;
            
        }
        printf("\n");        
    }
    if (valido == 0)
    {
        printf("Caractere não encontrado no array");
    }
}

int exc6(char x[3][3], char y) {

    int vezes = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (y == x[i][j])
            {
                vezes++;
            }
           
            
        }
}
    return vezes;

}


void exc7() {

    char lista[3][3] = {{'c','c','c'},{'c','a','c'},{'c','c','c'}};
    int quantidadecorerta = exc6(lista, 'c');
    
    printf("O char é C\n Adivinhe:");


    int chute;
    do
    {
        printf("Chuta a quantidade");
        scanf("%d", &chute);
        if (chute < quantidadecorerta)
        {
            printf("Mais");
        }
        else
            printf("Menos");
        
    } while (chute != quantidadecorerta);
        printf("Quantidade correta");
    
    return 0;

}

void exc8() {

   char senha[] = "senhaDificil789$";   
   char chute[100];
    int acertou = 0;
    int esgotado = 0;

    do  
    {
        printf("\nDigita senha");
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

    printf("\n\n------------------------\nExercicio 0\n");
     exc0();
     printf("\n\n------------------------\nExercicio 1\n");
     exc1();
     printf("\n\n------------------------\nExercicio 2\n");
     exc2();
     printf("\n\n------------------------\nExercicio 3\n");
     exc3();
     printf("\n\n------------------------\nExercicio 4\n");
     exc4();
     printf("\n\n------------------------\nExercicio 5\n");
     exc5();

    // Exercicio 6
    char lista[3][3] = {{'c','c','c'},{'c','a','c'},{'c','c','c'}};
    
    int printar = exc6(lista, 'c'); 
    printf("\n\n------------------------\nExercicio 6\nQnt Char");
    printf("\n%d", printar);

    printf("\n\n------------------------\nExercicio 7\n");
    exc7();
    printf("\n\n------------------------\nExercicio 8\n");
    exc8();


return 0;
}