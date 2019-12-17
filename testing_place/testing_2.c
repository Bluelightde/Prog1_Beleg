#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a[17];
    a[0] = 4444444;
    //size_t n = sizeof(a[0]);
    int n = log10(a[0])+1;
    printf("%d", n);
    
return 0;

}