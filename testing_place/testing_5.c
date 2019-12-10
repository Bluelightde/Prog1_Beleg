#include <stdio.h>
#include <stdlib.h>

int main(){


    int zahl1;

    printf("Geben Sie eine Zahl ein:\n");
    scanf("%d", &zahl1);

    switch (zahl1)
    {
    case 1 : printf("EINS\n"); break;
    case 2 : printf("ZWEI\n"); break;
    case 3 : printf("DREI\n"); break;
    
    default: printf("Es trifft kein Fall zu\n");
        break;
    }

}