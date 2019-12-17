#include<stdio.h>
#include<stdlib.h>
#include <time.h>



struct rad{
		
		char Art[12];
		struct rad* nextVerleih;
	};

struct verleih{
		char Knr[5];
		char Rnr[5];
		char Kennz[2];
		int Ausgabe[5];
		int Rueckgabe[5];
		struct verleih* nextVerleih; 
};

typedef struct verleih verleih_t;

//Funktionen
void printlist(verleih_t *firstVerleih){
	verleih_t *temporary = firstVerleih;

	printf("---------------------------------------------------------------------\n\n");
	printf("Kundennummer\tRechnungsnummer\tKennzeichen\tAusgabe\tRückgabe\n");
	printf("---------------------------------------------------------------------\n\n");
		
	while (temporary != NULL){
		printf("%s\t\t%s\t\t%s\t\t%d\t\t%d\n\n",temporary->Knr, temporary->Rnr, temporary->Kennz, temporary->Ausgabe[3], temporary->Rueckgabe[3]);
		temporary = temporary->nextVerleih;
	}
}

verleih_t *create_new_verleih(){
	verleih_t *currentVerleih = malloc(sizeof(verleih_t));
	puts("Kundennummer:\t");
	scanf("%s", currentVerleih->Knr);
	puts("Rechnungsnummer:\t");
	scanf("%s", currentVerleih->Rnr);
	puts("Kennzeichen:\t");
	scanf("%s", currentVerleih->Kennz);
	puts("Ausgabe Jahr/Monat/Tag/Stunde/Minute\t"); //Versuch das Datum in die Liste einzulesen
	for (int i = 0; i < 5; i++){
		int *Ausgabe = &Ausgabe[i]; 
		scanf("%d", currentVerleih->Ausgabe);
	}
	puts("Rückgabe:\t");
	for (int i = 0; i < 5; i++){
		int *Rueckgabe_zeiger = &currentVerleih->Rueckgabe[i];
		scanf("%d", currentVerleih->Rueckgabe);
	}
	printf("%d\n\n", currentVerleih->Ausgabe[1]);
	currentVerleih->nextVerleih = NULL;
	
	return currentVerleih;
}

int einstellungen(int anzahlRad, int eingabe_Menu){
	printf("Anzahl Räder: %d\n\n", anzahlRad);
	printf("Möchten Sie die Anzal der Räder andern? Ja/Nein 1/2");
	scanf("%d", &eingabe_Menu);
	if(eingabe_Menu == 1){
		printf("Wie viele Fahrräder sind Vorhanden?");
		scanf("%d", &anzahlRad);
		printf("Zurück zu Hauptmenu Ja/Nein 1/2?");
		scanf("%d", &eingabe_Menu);
		if (eingabe_Menu == 1){
			return anzahlRad;
		}
		else{
			exit(0);
		}
	}
	return 0;
}

int fehler(int eingabe_Menu){
	printf("Fehlerhafte Eingabe!\n\n");
	printf("Zurück zu Hauptmenu Ja/Nein 1/2?");
		scanf("%d", &eingabe_Menu);
		if (eingabe_Menu == 1){
			return 0;
		}
		else{
			exit(0);
		}
	return 0;
}

int main() {
	verleih_t *firstVerleih; //head
	verleih_t *tmp;

	int anzahlRad = 2;
	int eingabe_Menu;
	int ausge_Rad = 0;
	int count = 0;

	while (1){
		printf("\nHerzilch Willkomen im Fahrradverleih!\n\n");
		printf("Reservierung\t - \t1\n");
		printf("Stonierung\t - \t2\n");
		printf("Ausgabe\t\t - \t3\n");
		printf("Rücknahme\t - \t4\n");
		printf("Ansicht:\t - \t5\n");
		printf("Einstellungen\t - \t6\n\n");
		printf("Beenden\t\t - \t7\n\n");
		printf("Treffen Sie eine Auswahl:\n\n");
		scanf("%d", &eingabe_Menu);
		printf("\n");

		if (eingabe_Menu == 1){
			
				tmp=create_new_verleih();
				tmp->nextVerleih = firstVerleih;
				firstVerleih = tmp;
				printf("Reservierung erfolgreich!\n\n");
				printf("Zurück zu Hauptmenu Ja/Nein 1/2?");
				scanf("%d", &eingabe_Menu);
				if (eingabe_Menu == 1){
					//zurück zum Hauptmenu
				}
				else{
					exit(0);
				}
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
			printlist(firstVerleih);
			//ansicht(eingabe_Menu);
		}
		else if (eingabe_Menu == 6){
			anzahlRad = einstellungen(anzahlRad, eingabe_Menu);
		}

		else if (eingabe_Menu == 7){
			exit(0);
		}
		else{
			fehler(eingabe_Menu);
		}
		
	}
		return 0;
}