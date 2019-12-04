#include<stdio.h>

int main() {

    char adrName[50];
    char adrStrasse[100];
    char adrPlz[10];
    char adrStadt[50];


	printf("Hello World\n");

    struct adresse {
	char name[50];
	char strasse[100];
	short hausnummer;
	long plz;
	char stadt[50];
    };

	return 0;
}


