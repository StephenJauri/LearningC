#include <stdio.h>
#include <math.h>

#define INTEREST .053

double savingsAccount(double money, int qaurter);
double yearCheck(double money);

int main(void) {
    printf("-Quarter-|---Earned---|----Total----\n");
    yearCheck(10000);
    return 0;
}

double yearCheck(double money){
    double savings;
    savingsAccount(money,1);
    savingsAccount(money,2);
    savingsAccount(money,3);
    savings = savingsAccount(money,4);
    return savings;
}

double savingsAccount(double money, int quarter){
    double earned,savings;
    earned = money*(pow(INTEREST+1,quarter)-1);
    savings = earned + money;
    printf(" %7d | %10.2lf | %11.2lf\n",quarter,earned,savings);
    return savings;
}