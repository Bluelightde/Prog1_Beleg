#include<stdio.h>
#include<stdlib.h>

int main(int argc, const char * argv[]) {
    char choice[10];

    float v;
    float i;
    float r;

    printf("What would you like to calculate?: ");
    scanf("%9s", &choice); /* this specifier prevents overruns */
    printf("\nYou chose: \n""%s", choice);

    if (strcmp(choice, "r") == 0)
    { 
        printf("\nPlease enter voltage (V): \n");
        scanf("%f", &v); /* use a pointer to the original memory */

        printf("\nPlease enter current (I): \n");
        scanf("%f", &i); /* use a pointer to the original memory */

        r = v/i;

        printf("%f", r);
    }
}


