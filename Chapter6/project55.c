#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define JANUARY 31
#define FEBRUARY 28
#define MARCH 31
#define APRIL 30
#define MAY 31
#define JUNE 30
#define JULY 31
#define AUGUST 31
#define SEPTEMBER 30
#define OCTOBER 31
#define NOVEMBER 30
#define DECEMBER 31

bool isLeapYear(int year);
int yearStartDay(int year);
int getYear(void);
int printMonth(int startDay, int days,int month,int year);
void printCalendarYear(int year);
int daysInMonth(int month);
void printMonthName(int month);

int main(void){
    int year;
    char cont = 'y';
    year = getYear();
    while(cont == 'y' || cont == 'Y') {
        printf("\n\n");
        printCalendarYear(year);
        printf("Do you want to print next year?(Y/N): ");
        scanf(" %c",&cont);
        year++;
    }
    return 0;
}

void printCalendarYear(int year){
    bool isLeap;
    int monthStartDay,startDay;
    isLeap = isLeapYear(year);
    startDay = yearStartDay(year);
    monthStartDay = startDay;
    for(int i=1;i<=12;i++){
        if (isLeap && i == 2){
            printMonth(monthStartDay,daysInMonth(i)+1,i,year);
            monthStartDay = (monthStartDay+daysInMonth(i)+1)%7;
        } else {
            printMonth(monthStartDay,daysInMonth(i),i,year);
            monthStartDay = (monthStartDay+daysInMonth(i))%7;
        }
    }
}

bool isLeapYear(int year){
    return (!(year % 4) && (year % 100) || !(year % 400));
}

int getYear(void){
    int year;
    printf("Enter the year you want to print: ");
    scanf("%d",&year);
    return year;
}

int yearStartDay(int year){
    return (((year-1)*365)+((year-1)/4)-((year-1)/100)+((year-1)/400)+1)%7;
}

int printMonth(int startDay, int days,int month,int year){
    printMonthName(month);
    printf("\t\t%4d\n",year);
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    int currentPos = 1;
    for(currentPos; currentPos <= startDay;currentPos++){
        printf("    ");
    }
    for(int i = 1;i<=days;i++,currentPos++){
        printf("%3d ",i);
        if ((currentPos%7)==0){
            printf("\n");
        }
    }
    printf("\n\n");
}

void printMonthName(int month){
    switch(month){
        case 1:
            printf("JANUARY\t");
            return;
        case 2:
            printf("FEBRUARY");
            return;
        case 3:
            printf("MARCH\t");
            return;
        case 4:
            printf("APRIL\t");
            return;
        case 5:
            printf("MAY\t");
            return;
        case 6:
            printf("JUNE\t");
            return;
        case 7:
            printf("JULY\t");
            return;
        case 8:
            printf("AUGUST\t");
            return;
        case 9:
            printf("SEPTEMBER");
            return;
        case 10:
            printf("OCTOBER\t");
            return;
        case 11:
            printf("NOVEMBER");
            return;
        case 12:
            printf("DECEMBER");
            return;
        default:
            exit(100);
            return;
    }
}

int daysInMonth(int month){
    switch(month){
        case 1:
            return JANUARY;
        case 2:
            return FEBRUARY;
        case 3:
            return MARCH;
        case 4:
            return APRIL;
        case 5:
            return MAY;
        case 6:
            return JUNE;
        case 7:
            return JULY;
        case 8:
            return AUGUST;
        case 9:
            return SEPTEMBER;
        case 10:
            return OCTOBER;
        case 11:
            return NOVEMBER;
        case 12:
            return DECEMBER;
        default:
            exit(100);
    }
}