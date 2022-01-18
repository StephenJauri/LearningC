#include <stdio.h>
#include <limits.h>


int main(void){
    int maximum = INT_MIN;
    int currentNum;
    int numCount = 0;
    printf("Enter an integer: ");
    while((scanf("%d",&currentNum))!=EOF){
        if (currentNum > maximum){
            maximum = currentNum;
            numCount = 1;
        } else if (currentNum == maximum){
            numCount++;
        }
        printf("Enter an integer: ");
    }
    printf("Largest Value:\t%d\n",maximum);
    printf("Times Entered:\t%d\n",numCount);
    return 0;
}