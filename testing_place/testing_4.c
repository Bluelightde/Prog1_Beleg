#include <stdio.h>
#include <stdlib.h>

int main(){

    int zahl1;

    printf("Geben Sie eine Zahl ein:");
    scanf("%d", &zahl1);


    if (zahl1 >5) {
        printf("Die Zahl ist größer als 5\n");
    }

    else if (zahl1 < 5){
        printf("Die Zahl ist kleinder als 5\n");
    }

    else {
        printf("Die Zahl ist gleich 5\n");
    }
    

    
    
return 0;
}