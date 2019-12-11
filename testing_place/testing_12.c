#include<stdio.h>
#include<stdlib.h>

int main(){

    int array[] = {5,4,3,6,7,0,1,3,4};

    printf("Anzahl: %lu\n", sizeof (array) / sizeof (int));
    return 0;
}
