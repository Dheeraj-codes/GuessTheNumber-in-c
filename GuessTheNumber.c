#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    
    char p;
    do{
        int number, guess, nGuesses = 0;
        srand(time(0));
        number = rand()%100 +1;
        do{
            printf("Guess the number between 1 to 100\n");
            scanf("%d", &guess);
            nGuesses++;
            if(guess> number){
                printf("This is greater, try a lower number!\n");
            }
            else if(guess< number){
                printf("This is lower, try to enter a greater number!\n");
            }
            else{
                printf("Wohoo! You guessed it right in %d guesses\n", nGuesses);
            }
        }while(guess!=number);

        printf("Play Again (y/n)");
        scanf(" %c",&p);
    }while(p == 'y');
    return 0;
}