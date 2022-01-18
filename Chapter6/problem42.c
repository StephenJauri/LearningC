#include <stdio.h>

void drawRight(int rows);

int main(void){
    drawRight(10);
    return 0;
}

void drawRight(int rows){
    for(int i = 0;i<(float)rows/2;i++){
        printf("*");
        for(int j = 0;j<i;j++)
            printf("**");
        printf("\n");
    }
    for(int i = rows/2-1;i>=0;i--){
        printf("*");
        for(int j = 0;j<i;j++)
            printf("**");
        printf("\n");
    }
    return;
}