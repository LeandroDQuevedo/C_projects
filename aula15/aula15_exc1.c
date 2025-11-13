#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


void printanum(int a[]){
    for (size_t i = 0; i < 10; i++)
    {
        printf("O número na posição %d: %d\n", i+1, a[i]);
        scanf("");
    }
    
}

void negpzero(int a[], int size){
        int arraysemnegativo[size];
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
            a[i] = 0;

        arraysemnegativo[i] = a[i];
    }
}

void mudarvalor(int a[], int size, int x){
    for (int i = 0; i < size; i++)
    {
        if (a[i] > x)
        {
            a[i] = x;
        }
    }
}

void Clamp(int a[], int size, int x){
    negpzero(a,size);
    mudarvalor(a,size,x);
}

int procuranum(int a[], int x, int size){
    int qntdnum = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == x)
        {
            qntdnum++;
        }
        
    }
    return qntdnum;
}

int criararray(int a[], int size){
    int * novoarray = (int *)malloc(sizeof(int)*size);

    for (int i = 0; i < size; i++)
    {
        novoarray[i] = a[i];
    }
    return novoarray;
}

int main(){

    int array[10];
    int arrayrange = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < 10; i++)
    {
        printf("Coloque o número:");
        scanf("%d", &array[i]);
    }

    
    Clamp(array, arrayrange, 8);
    printanum(array);

    printf("\n\n\n");
    int array1[5] = {1,2,3,4,5};
    int array2[7] = {1,2,3,4,5,6,7};
    int array3[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int * arraydearray[3] = {array1,array2,array3};
    int sizes[] = {5, 7, 20};
    for (int i = 0; i < 3; i++)
    {
        int arrayrange = sizes[i];//sizeof(arraydearray[i])/sizeof(arraydearray[i][0]);
        int *arrayagora = arraydearray[i];
        arrayagora = criararray(arrayagora, arrayrange);
        for (int j = 0; j < arrayrange; j++)
        {
            printf("%d ", *arrayagora++);
        }
        printf("\n");
        
        
        
    }
    

return 0;
}