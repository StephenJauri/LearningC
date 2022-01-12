#include <stdio.h>

int main(void) {
    char letter;
    int countE, countI, countA;
    countE = 0;
    countI = 0;
    countA = 0;
    letter = 'o';
    switch (letter)
    {
        case 'e':
        case 'E': countE++;
            break;
        case 'a':
        case 'A': countA++;
            break;
        case 'i':
        case 'I': countI++;
            break;
        default: 
            ;
            break;
    }
    printf("A: %d\nE: %d\nI: %d\n",countA,countE,countI);
    return 0;
}