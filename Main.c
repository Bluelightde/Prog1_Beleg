#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


/*
struct rad{
		
		char Art[12];
		struct rad* nextVerleih;
	};
*/
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
	printf("Kundennummer\tRechnungsnummer\tKennzeichen\tAusgabe\t\tRückgabe\n");
	printf("---------------------------------------------------------------------\n\n");
		
	while (temporary != NULL){
		//printf("Test");
		if(temporary != NULL){
			printf("%s\t\t%s\t\t%s\t\t%d-%d-%d %d:%d\t\t%d-%d-%d %d:%d\n\n",temporary->Knr, temporary->Rnr, temporary->Kennz, temporary->Ausgabe[0],temporary->Ausgabe[1],temporary->Ausgabe[2],temporary->Ausgabe[3],temporary->Ausgabe[4] ,temporary->Rueckgabe[0],temporary->Rueckgabe[1],temporary->Rueckgabe[2],temporary->Rueckgabe[3],temporary->Rueckgabe[4]);
		}
		//printf("Test");
		if(temporary != NULL){
			temporary = temporary->nextVerleih;
		}
		//printf("Test");
	}
}

void datum_pruefen(verleih_t *firstVerleih){
	verleih_t *temporary = firstVerleih;

	while(temporary != NULL){
		if (firstVerleih->Kennz == temporary->Kennz){
			printf("Bestanden");
		}
		temporary = temporary->nextVerleih;
	}
}


verleih_t *create_new_verleih(){
	verleih_t *currentVerleih = malloc(sizeof(verleih_t));
	int fehler = 0;
	puts("Kundennummer:\t");
	scanf("%s", currentVerleih->Knr);
	puts("Rechnungsnummer:\t");
	scanf("%s", currentVerleih->Rnr);
	puts("Kennzeichen:\t");
	scanf("%s", currentVerleih->Kennz);
	puts("Ausgabe Jahr/Monat/Tag/Stunde/Minute\t");
	for (int i = 0; i < 4; i++){
		int *ausgabe_Zeiger = &currentVerleih->Ausgabe[i]; 
		scanf("%d\n", ausgabe_Zeiger);
	}
	int size_year = log10(currentVerleih->Ausgabe[0])+1;
	int size_month = log10(currentVerleih->Ausgabe[1])+1;
	int size_day = log10(currentVerleih->Ausgabe[2])+1;
	int size_hour = log10(currentVerleih->Ausgabe[3])+1;
	int size_min = log10(currentVerleih->Ausgabe[4])+1;
	if(4 == size_year){
		if (currentVerleih->Ausgabe[0]>2018){
			if (2 == size_month){
				printf("Erfolg\n\n");
			}
		}
	}

	else{
		//fehler = 1;
		printf("Fehler");
	}	
	//gueltigkeit(currentVerleih);
	puts("Rückgabe:\t");
	for (int i = 0; i < 6; i++){
		int *rueckgabe_Zeiger = &currentVerleih->Rueckgabe[i];
		scanf("%d", rueckgabe_Zeiger);
	}
	

	
		currentVerleih->nextVerleih = NULL;
		printlist(currentVerleih);
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
	verleih_t *firstVerleih;
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
				//datum_pruefen(firstVerleih);
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