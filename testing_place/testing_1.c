#include<stdio.h>

int main() {

    int Variable = 5;
	int *Zeiger_Variable;

	Variable = &Zeiger_Variable;
	
	printf("a ist %d\n", Variable);
	printf("b ist %d\n", *Zeiger_Variable);

	
	return 0;
}


