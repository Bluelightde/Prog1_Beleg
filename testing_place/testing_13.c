#include<stdio.h>
#include<stdlib.h>
#include<string.h> 


int main(){

    char buch[100];
    int groesse;

    printf("Bitte geben Sie einen Text ein:\n");
    fgets(buch,100,stdin);
    groesse = strlen(buch);

    printf("Du hast %d Buchstaben eingegeben.\n", groesse-1);

    return 0;
}