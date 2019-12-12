#include<stdio.h>
#include<stdlib.h>

int main(){
    int secret_number = 5;
    int guess;
    int guessCount = 0;
    int guessLimet = 3;
    int outOfGuesses = 0;

    while (guess != secret_number && outOfGuesses == 0){
        if (guessCount < guessLimet){
            printf("Guess the number:");
            scanf("%d", &guess);
            guessCount++;
        }
        else{
            outOfGuesses = 1;
        }

       
    } 
    if(outOfGuesses == 1){
        printf ("Out of guesses");
    }
    else{
        printf("You are right!!!");
    }
    

    return 0;
}