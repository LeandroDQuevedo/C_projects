#include <stdio.h> 
#include <math.h>
#include <ctype.h>
#include <stdbool.h>




int main()
{
    int error;

    printf("Olá diga seu erro:\n");
    scanf("%d", &error);

    switch (error)
    {
    case 404:
        printf("Not found.");
        break;
    case 403:
        printf("Acess Denied.");
        break;
    case 500:
        printf("Internal Server Error.");
        break;
    case 503:
        printf("Service Unavailable.");
        break;
    default:
        printf("Unknown Error.");
        break;
    }

        
        return 0;
}

