#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <stdint.h>

struct rad{
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
int reservierung_Anfang(int count){
	newVerleih = (struct verleih *) malloc(sizeof(struct verleih));
	firstVerleih = newVerleih;
	currentVerleih = firstVerleih;
	count++;
	return count;

} 

int reservierung_Normal(){
	printf("Test\n\n");
	newVerleih = (struct verleih *) malloc(sizeof(struct verleih));
	printf("Test\n\n");

	currentVerleih->nextVerleih = newVerleih;
	currentVerleih = currentVerleih->nextVerleih;
	return 0;
} 

int reservierung(int aus_rad, int ges_rad){

	if(aus_rad < ges_rad){

		int eingabe;
	
		printf("\n--Reservierung--\n\n");
		puts("Kundennummer:");
		scanf("%s", currentVerleih->Knr);
		puts("Rechnungsnummer:");
		scanf("%s", currentVerleih->Rnr);
		currentVerleih->nextVerleih = NULL;

		printf("--------------\n\n");
		printf("Kundennummer\tRechnungsnummer\n");
		printf("---------------------------------------------------------------------\n\n");
		currentVerleih = firstVerleih;

		while (currentVerleih != NULL){
		
		printf("%s\t\t%s\n\n",currentVerleih->Knr, currentVerleih->Rnr);
		currentVerleih = currentVerleih->nextVerleih;
		}
		aus_rad++;

		printf("Reservierung erfolgreich!\n\n");
		printf("Ausgeliehende Räder: %d/%d\n\n", aus_rad, ges_rad);
		printf("Zurück zu Hauptmenu Ja/Nein 1/2?");
		scanf("%d", &eingabe);
			if (eingabe == 1){
				return aus_rad;
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

int ansicht(int eingabe_Menu){
	currentVerleih = firstVerleih;
	printf("--------------\n\n");
		printf("Kundennummer\tRechnungsnummer\n");
		printf("---------------------------------------------------------------------\n\n");

	while (currentVerleih){
		
		printf("%s\t\t%s\n\n",currentVerleih->Knr, currentVerleih->Rnr);
		currentVerleih = currentVerleih->nextVerleih;
	}
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

	int anzahlRad = 2;
	int eingabe_Menu;
	int ausge_Rad = 0;
	int count = 0;

	while (1){
	
		printf("\nHerzilch Willkomen im Fahrradverleih!\n\n");

		printf("%d\n\n", count);

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
			if(count == 0){
				count = reservierung_Anfang(count);
			}
			else{
				reservierung_Normal();
			}
			
			ausge_Rad = reservierung(ausge_Rad, anzahlRad);
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
			ansicht(eingabe_Menu);
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

//Hallo