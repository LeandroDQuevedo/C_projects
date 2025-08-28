#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char A;



int main()
{

    printf("Digite uma letra \n-");
    scanf("%c", &A);
    A = toupper(A);



    if (A == 'A' || A == 'E' || A == 'I' || A == 'O' || A == 'U')
        printf("A letra %c é uma vogal", A);
    else
        printf("A letra %c não é uma vogal", A);
    
   

  
   


}