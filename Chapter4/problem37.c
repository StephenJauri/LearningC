#include <stdio.h>
#include <math.h>

double roundPlaces(double toRound, int places);
double getNum(double* num);

int main(void) {
    double num;
    double numRounded;
    getNum(&num);
    numRounded = roundPlaces(num,2);
    printf("%lf",numRounded);
    return 0;
}

double getNum(double* num) {
    printf("Enter a Number: ");
    return scanf("%lf",num);
}

double roundPlaces(double toRound, int places){
    double shift;
    shift = pow(10,places);
    toRound *= shift;
    toRound = round(toRound);
    toRound /= shift;
    return toRound;
}
