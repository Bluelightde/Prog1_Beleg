#include<stdio.h>
#include<stdlib.h>

int big_number (int zahl1, int zahl2){

    if (zahl1 > zahl2){
        return zahl1;
    }
    
    else if (zahl2 > zahl1){
        return zahl2;
    }
    else{
        return 0;
    }
}



int main(){

    int wert1, wert2, big;

    printf("Bitte eine Zahl eingeben:\n");
    scanf("%d", &wert1);

    printf("Bitte eine Zahl eingeben:\n");
    scanf("%d", &wert2);


    big = big_number(wert1, wert2);

    if (big != 0){
    printf("Die größere Zahl ist %d\n", big);
    }

    else{
        printf("Die beiden Zahlen haben die selben Wert.");
        return 0;
    }
    
    

    
    return 0;
}