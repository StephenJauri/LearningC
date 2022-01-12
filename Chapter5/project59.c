#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessNum(int randNum);

int main(void) {
    int randNum;
    srand(time(NULL));
    randNum = rand()%20+1;
    printf("I'm thinking of a number between 1 and 20\n");
    guessNum(randNum);
    guessNum(randNum);
    guessNum(randNum);
    guessNum(randNum);
    guessNum(randNum);
    printf("You were so close, the number was %d",randNum);
    return 0;
}

void guessNum(int randNum){
    int guessNum;
    printf("Can you guess what it is?\t");
    scanf("%d",&guessNum);
    if (guessNum == randNum){
        printf("You guessed it!\n");
        exit(0);
    } else if (guessNum < randNum){
        printf("Too low.\n");
    } else {
        printf("Too high.\n");
    }
}