#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void String_Vergleich (char string1[], char string2[]){
    int wert = strcmp(string1, string2);

    if(wert == 0)
        printf("%s == %s\n", string1, string2);    
    
    else
        printf("sind nicht gleich\n");
    
}




int main(){

     char str1[] = "aaa";
     char str2[] = "aab";
     char str3[] = "abb";

     String_Vergleich(str1, str2);
     String_Vergleich(str2, str3);
     String_Vergleich(str3, str1);
     String_Vergleich(str1, str1);

    return 0;
}