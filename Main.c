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
int reservierung(int aus_räder, int ges_räder){

	if(aus_räder < ges_räder){

		int eingabe;
	
		newVerleih = (struct verleih *) malloc(sizeof(struct verleih));
		firstVerleih = newVerleih;
		currentVerleih = firstVerleih;

		printf("\n--Reservierung--\n\n");
		puts("Kundennummer:");
		scanf("%s", currentVerleih->Knr);
		puts("Rechnungsnummer:");
		scanf("%s", currentVerleih->Rnr);
		currentVerleih->nextVerleih=newVerleih;
		currentVerleih = currentVerleih->nextVerleih;
		currentVerleih->nextVerleih = NULL;

		printf("--------------\n\n");
		printf("Kundennummer\tRechnungsnummer\n");
		printf("---------------------------------------------------------------------\n\n");
		currentVerleih = firstVerleih;

		while (currentVerleih){
		
		printf("%s\t\t%s\n\n",currentVerleih->Knr, currentVerleih->Rnr);
		currentVerleih = currentVerleih->nextVerleih;
		}
		aus_räder++;

		printf("Reservierung erfolgreich!\n\n");
		printf("Ausgeliehende Räder: %d/%d\n\n", aus_räder, ges_räder);
		printf("Zurück zu Hauptmenu Ja/Nein 1/2?");
		scanf("%d", &eingabe);
			if (eingabe == 1){
				return aus_räder;
			}
			else{
				exit(0);
			}
	}

	else{
		printf("Es sind keine Räder mehr verfügbar.\n\n");
		return 0;
	}
}

int Ansicht(){
	currentVerleih = firstVerleih;
	printf("--------------\n\n");
		printf("Kundennummer\tRechnungsnummer\n");
		printf("---------------------------------------------------------------------\n\n");

	while (currentVerleih){
		
		printf("%s\t\t%s\n\n",currentVerleih->Knr, currentVerleih->Rnr);
		currentVerleih = currentVerleih->nextVerleih;
	}
	return 0;
}

int zeiger(int i){

	for (i = 0; i < 1; i++){
		
	}
}

int main() {

	int anzahlRäder = 2;
	int eingabe_Menu;
	int ausge_Räder = 0;
	int count = 1;

	while (1){
	
		printf("\nHerzilch Willkomen im Fahrradverleih!\n\n");

		printf("Reservierung\t - \t1\n");
		printf("Stonierung\t - \t2\n");
		printf("Ausgabe\t\t - \t3\n");
		printf("Rücknahme\t - \t4\n");
		printf("Übersicht:\t - \t5\n");
		printf("Einstellungen\t - \t6\n\n");
		printf("Beenden\t\t - \t7\n\n");
		printf("Treffen Sie eine Auswahl:\n\n");
		scanf("%d", &eingabe_Menu);
		printf("\n");

		if (eingabe_Menu == 1){
			ausge_Räder = reservierung(ausge_Räder, anzahlRäder);
			count = zeiger(count);
		}
		else if (eingabe_Menu == 2){
			/* code */
		}
		else if (eingabe_Menu == 3){
			/* code */
		}
		else if (eingabe_Menu == 4){
			/* code */
		}
		else if (eingabe_Menu == 5){
			Ansicht();
		}

		else if (eingabe_Menu == 6){
			printf("Anzahl Räder: %d\n\n", anzahlRäder);
			printf("Möchten Sie die Anzal der Räder andern? Ja/Nein 1/2");
			scanf("%d", &eingabe_Menu);
			if(eingabe_Menu == 1){
				printf("Wie viele Fahrräder sind Vorhanden?");
				scanf("%d", &anzahlRäder);
				//ergänzen
				printf("Zurück zu Hauptmenu Ja/Nein 1/2?");
				scanf("%d", &eingabe_Menu);
				if (eingabe_Menu == 1){
				}
			}
			else{
				exit(0);
			}
		}

		else if (eingabe_Menu == 7){
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