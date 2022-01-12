#include <stdio.h>

void getScores(float* score1,float* score2,float* score3);
float getAverage(float score1,float score2, float score3);
void printGrade(int average);

int main(void) {
    float score1,score2,score3,average;
    getScores(&score1,&score2,&score3);
    average = getAverage(score1,score2,score3);
    printGrade(average);
    return 0;
}


void getScores(float* score1,float* score2,float* score3){
    printf("Enter your first Grade:\t\t");
    scanf("%f",score1);
    printf("Enter your second Grade:\t");
    scanf("%f",score2);
    printf("Enter your third Grade:\t\t");
    scanf("%f",score3);
}


float getAverage(float score1,float score2, float score3){
    return (score1 + score2 + score3)/3.0;
}


void printGrade(int average){
    switch(average/10){
        case 10:
        case 9: printf("You got an A");
        break;
        case 8: printf("You got a B");
        break;
        case 7: printf("You got a C");
        break;
        case 6: printf("You got a D");
        break;
        default: printf("You got an F");
        break;
    }
}