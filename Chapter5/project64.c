#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void getNums(double* a, double* b, double* c);
int getSolutions(double a, double b, double c, double* solution1, double* solution2);
void printSolutions(double firstSol,double secondSol, int solutions);

int main(void){
    double a,b,c,firstSol,secondSol;
    int solutions;
    getNums(&a, &b, &c);
    solutions = getSolutions(a,b,c,&firstSol,&secondSol);
    printSolutions(firstSol,secondSol,solutions);
    return 0;
}

void getNums(double* a, double* b, double* c){
    printf("Enter a: ");
    scanf("%lf",a);
    printf("Enter b: ");
    scanf("%lf",b);
    printf("Enter c: ");
    scanf("%lf",c);
    return;
}


int getSolutions(double a, double b, double c, double* solution1, double* solution2){
    if (a == 0 && b == 0){
        return 0;
    }
    else if (a == 0){
        *solution1 = (0-c)/b;
        return 1;
    }
    else if ((pow(b,2) - 4 * a * c)<0){
        return 0;
    } else{
        *solution1 = ((0-b)+sqrt((pow(b,2) - 4 * a * c)))/(2*a);
        *solution2 = ((0-b)-sqrt((pow(b,2) - 4 * a * c)))/(2*a);
        return 2;
    }
}

void printSolutions(double firstSol,double secondSol, int solutions){
    switch(solutions){
        case 0:
            printf("There are no solutions.\n");
            return;
        case 1:
            printf("There is one solution.\n");
            printf("The answer is %0.2lf\n",firstSol);
            return;
        case 2:
            printf("There are 2 solutions.\n");
            printf("The first answer is %0.2lf\n",firstSol);
            printf("The second answer is %0.2lf\n",secondSol);
            return;
        default:
            exit(100);
            return;
    }
}