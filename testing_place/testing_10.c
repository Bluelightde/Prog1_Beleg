#include<stdio.h>
#include<stdlib.h>

int main(){

    int age = 5;
    double gpa = 3.2;
    char name[3] = "tom";

    printf("age: \t%p\n", &age);
    printf("gpa: \t%p\n", &gpa);
    printf("name: \t%p\n", &name);

    return 0;
}