#include <stdio.h>

void printGrades(float grade1,float grade2,float grade3,float grade4) {
    printf("First Grade:\t%-6.2f\n",grade1);
    printf("Second Grade:\t%-6.2f\n",grade2);
    printf("Third Grade:\t%-6.2f\n",grade3);
    printf("Fourth Grade:\t%-6.2f\n",grade4);
    printf("Average Grade:\t%-6.2f\n",(grade1+grade2+grade3+grade4)/4);
    return;
}
int main(void) {
    float firstGrade = 92.5f;
    float secondGrade = 82.75f;
    float thirdGrade = 62.5f;
    float fourthGrade = 100.0;
    printGrades(firstGrade,secondGrade,thirdGrade,fourthGrade);
}