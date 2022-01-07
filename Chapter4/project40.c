#include <stdio.h>

#define COMMISSION 0.125
#define STATE_TAX 0.1
#define FEDERAL_TAX 0.25
#define RETIREMENT 0.08

double earnings(int sales,int bonus);
void printEarnings(double person1, double person2, double person3, double person4);

int main(void) {
    double person1,person2,person3,person4;
    person1 = earnings(53500,425);
    person2 = earnings(41300,300);
    person3 = earnings(56800,350);
    person4 = earnings(36200,175);
    printEarnings(person1, person2, person3, person4);
    return 0;
}

double earnings(int sales, int bonus) {
    double total;
    total = COMMISSION * sales;
    total -= total*(FEDERAL_TAX+STATE_TAX+RETIREMENT);
    return total;
}

void printEarnings(double person1, double person2, double person3, double person4) {
    printf("Person 1 earned:\t$%0.2lf\n",person1);
    printf("Person 2 earned:\t$%0.2lf\n",person2);
    printf("Person 3 earned:\t$%0.2lf\n",person3);
    printf("Person 4 earned:\t$%0.2lf\n",person4);
}