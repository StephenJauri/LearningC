#include <stdio.h>

int main(void) {
    char letter;
    int number;
    long double pi;
    printf("Enter a random letter: ");
    scanf("%c",&letter);
    printf("\nEnter a whole number: ");
    scanf("%d",&number);
    printf("\nEnter pi as far as you can: ");
    scanf("%Lf",&pi);
    printf("Your Character:\t%d\nYour Character ASCII:\t%c\nYour number:\t%d\nYour pi knowledge:\t%21.19Lf",letter,letter,number,pi);
    return 0;
}