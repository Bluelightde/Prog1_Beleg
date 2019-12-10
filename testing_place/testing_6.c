#include<stdio.h>
#include<stdlib.h>

int main(){

    int zahl1 = -5;

    do{
        zahl1++;
        printf("erhöhe um eins\n");    
    }
    while (zahl1 < 0);

    printf("%d\n", zahl1);

}