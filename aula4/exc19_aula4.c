#include <stdio.h> 
#include <math.h>

char a;
char b;
char c;
int answ;


int main()
{
    answ = 0;
    printf(" 1 – Ao prestar socorro à vítima de um acidente, NÃO se deve:\n\na) acionar imediatamente o Corpo de Bombeiro\nb) dar água, comida ou qualquer substância para a vítima cheirar\nc) conversar com a vítima para saber de suas condições gerais\nd) deixar a vítima confortável até a chegada do socorro especializado\n");
    scanf( "\n%c", &a);
    if (a == 'b')
        answ += 1;
    printf("2 – Ao se deparar com uma sinaleira na cor vermelha, você deve:\n\na) rir dela\nb) passar mais rápido, pois é perigoso para\nc) dobrar a direita, pois vermelho indica direit\nd) parar\n");
    scanf("\n%c", &b);
    if (b == 'd')
        answ += 1;
    printf("3 – Segundo a direção defensiva, quando você está em uma via e um pedestre vai atravessar você:\n\na) buzina muito forte para que o pedestre se assuste\nb) atropela o pedestre, pois lugar de pedestre é na calçada\nc) para e dá uma carona para o pedestre, pois é uma lei de trânsit\nd) para e aguarda ele atravessar\n");
    scanf("\n%c", &c);
    if (c == 'd')
        answ += 1;

    if (answ >= 2)
        printf("Você está apto a tirar a carteira!");
    else
        printf("Você não está apto a tirar a carteira");
    
    

   
  

}