void teil_test_date(){
	int size_year = log10(currentVerleih->Ausgabe[0])+1;
	int size_month = log10(currentVerleih->Ausgabe[1])+1;
	int size_day = log10(currentVerleih->Ausgabe[2])+1;
	int size_hour = log10(currentVerleih->Ausgabe[3])+1;
	int size_min = log10(currentVerleih->Ausgabe[4])+1;

	if (size_hour<3){
		if(currentVerleih->Ausgabe[3]<24){
			if(currentVerleih->Ausgabe[3]>-1){
				if(size_min < 3){
					if(currentVerleih->Ausgabe[4]>-1){
						if(currentVerleih->Ausgabe[4]<60){
							printf("Datum richtig\n\n");
						}
						else{
							printf("Das Datum ist fehlerhaft!\n\n");
							exit(0);
						}			
					}
						else{
							printf("Das Datum ist fehlerhaft!\n\n");
							exit(0);
						}			
				}
				else{
					printf("Das Datum ist fehlerhaft!\n\n");
					exit(0);
				}			
			}
			else{
				printf("Das Datum ist fehlerhaft!\n\n");
				exit(0);
			}								
		}
		else{
			printf("Das Datum ist fehlerhaft!\n\n");
			exit(0);
		}
							 
	}
}