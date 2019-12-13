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
int reservierung(){
	newVerleih = (struct verleih *) malloc(sizeof(struct verleih));
	firstVerleih = newVerleih;
	currentVerleih = firstVerleih;

	printf("\n--Reservierung--\n\n");
	puts("Kundennummer:");
	scanf("%s", currentVerleih->Knr);
	puts("Rechnungsnummer:");
	scanf("%s", currentVerleih->Rnr);
	currentVerleih->nextVerleih=NULL;

	printf("--------------\n\n");
	printf("Kundennummer\tRechnungsnummer\n");
	printf("---------------------------------------------------------------------\n\n");
	printf("%s\t\t%s\n",currentVerleih->Knr, currentVerleih->Rnr);

	return 0;

}

//int räder(anzahlRäder){


//}


int main() {

	int anzahlRäder = 2;
	int auswahl;
	
	printf("\nHerzilch Willkomen im Fahrradverleih!\n\n");

	printf("Reservierung\t - \t1\n");
	printf("Stonierung\t - \t2\n");
	printf("Ausgabe\t\t - \t3\n");
	printf("Rücknahme\t - \t4\n\n");
	printf("Treffen Sie eine Auswahl:\n\n");
	scanf("%d", &auswahl);

	

	if (auswahl == 1){

		reservierung();

	}
	else if (auswahl ==2)
	{
		/* code */
	}
	else if (auswahl ==3)
	{
		/* code */
	}
	else
	{
		
	}
		return 0;
}

//Hallo