#include<stdio.h>
#include<stdlib.h>

int main(){

    int array1[10]; int array2[10];
    /*
    for(i = 0; i < 10; i++){

        array1[i] = i;
        array2[i] = i; 
    } 
    */
    array2[9] = 30;
    
    for(int i = 0; i < 10; i++){
        if(array1[i] == array2[i]){
            continue;}
        else
        {
            printf("Unterschied an Position %d\n", i);
            break;
        }
        
    
    }
    return 0;

}

