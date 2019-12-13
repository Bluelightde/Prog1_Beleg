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

	int eingabe;

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
	printf("%s\t\t%s\n\n",currentVerleih->Knr, currentVerleih->Rnr);
	printf("Reservierung erfolgreich!\n\n");
	printf("Zurück zu Hauptmenu Ja/Nein 1/2?");
	scanf("%d", &eingabe);
	if (eingabe == 1){
		return 0;
	}
	else
	{
		exit(0);
	}
}



//int räder(anzahlRäder){


//}


int main() {

	int anzahlRäder = 2;
	int auswahl;
	int eingabe_Menu;

	while (1){
	
		printf("\nHerzilch Willkomen im Fahrradverleih!\n\n");

		printf("Reservierung\t - \t1\n");
		printf("Stonierung\t - \t2\n");
		printf("Ausgabe\t\t - \t3\n");
		printf("Rücknahme\t - \t4\n");
		printf("Einstellungen\t - \t5\n\n");
		printf("Beenden\t\t - \t6\n\n");
		printf("Treffen Sie eine Auswahl:\n\n");
		scanf("%d", &auswahl);
		printf("\n");

	


		if (auswahl == 1){

			reservierung();
		

		}
		else if (auswahl == 2){
			/* code */
		}
		else if (auswahl == 3){
			/* code */
		}
		else if (auswahl == 4){
			/* code */
		}
		else if (auswahl == 5){
			printf("Anzahl Räder: %d\n\n", anzahlRäder);
			printf("Möchten Sie die Anzal der Räder andern? Ja/Nein 1/2");
			scanf("%d", &auswahl);
			if(auswahl == 1){
				printf("Wie viele Fahrräder sind Vorhanden?");
				scanf("%d", &anzahlRäder);
				printf("Zurück zu Hauptmenu Ja/Nein 1/2?");
				scanf("%d", &eingabe_Menu);
				if (eingabe_Menu == 1){

			}
			else{
				exit(0);
			}

			}
			
		}
		

		else if (auswahl == 6){
			exit(0);
		}
		else{
			printf("Fehlerhafte Eingabe!\n\n");
			printf("Zurück zu Hauptmenu Ja/Nein 1/2?");
			scanf("%d", &eingabe_Menu);
			if (eingabe_Menu == 1){

			}
			else{
				exit(0);
			}
		}
		
	}
		return 0;
}

//Hallo