/*
int reservierung_Anfang(int count){
	newVerleih = (struct verleih*) malloc(sizeof(struct verleih));
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
*/





/*
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