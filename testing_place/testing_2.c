#include<stdio.h>
#include<stdlib.h>

int main(){

    int zahl1;
    int zahl2;
    int zahl3;

    printf("Bitte geben Sie eine Zahl ein!");
    scanf("%d", &zahl1);
    printf("Bitte geben Sie eine Zahl ein!");
    scanf("%d", &zahl2);

    zahl3 = zahl1 * zahl2;

    printf("%d ist die Zahl!", zahl3);

return 0;

}