#include <stdio.h>

int main(void){
    for(int i = 6;i<=66;i+=2){
        printf(i!=66?"%d, ":"%d\n",i);
    }
    for(int i = 7;i<=67;i+=2){
        printf(i!=67?"%d, ":"%d\n",i);
    }
    int sum = 0;
    for(int i = 1;i<=15;i++)
        sum+=i;
    printf("%d\n",sum);
    sum = 0;
    for (int i = 15;i<=45;i+=2)
        sum += i;
    printf("%d\n",sum);
    sum = 0;
    for (int currentNum = 1, i = 1;i<=50;i++,currentNum += 3)
        sum += currentNum;
    printf("%d\n",sum);
    return 0;
}