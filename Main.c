#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <stdint.h>

struct fahrräder{
		char Kennz[2];
		char Art[12];
		//char Reservierung[];
	};

struct verleih{
		char Knr[5];
		char Rnr[5];
		struct verleih * nextVerleih; 
};

struct verleih *newVerleih;
struct verleih *firstVerleih;
struct verleih *currentVerleih;

//Funktionen


//int räder(anzahlRäder){


//}


int main() {

	int anzahlRäder = 2;
	
	printf("\nHerzilch Willkomen im Fahrradverleih!\n\n");

	printf("Reservierung\t - \t1\n");
	printf("Stonierung\t - \t2\n");
	printf("Ausgabe\t\t - \t3\n");
	printf("Rücknahme\t - \t4\n\n");
	printf("Treffen Sie eine Auswahl:\n\n");
	
	newVerleih = (struct verleih *) malloc(sizeof(struct verleih));

	firstVerleih = newVerleih;
	currentVerleih = firstVerleih;

	puts("Kundennummer:");
	scanf("%s", currentVerleih->Knr);
	puts("Rechnungsnummer:");
	scanf("%s", currentVerleih->Rnr);

	currentVerleih->nextVerleih=NULL;

	printf("--------------\n");
	printf("Kundennummer: %s \n", currentVerleih->Knr);
	printf("Rechnungsnummer: %s \n", currentVerleih->Rnr);

	


	
	return 0;
}

//Hallo