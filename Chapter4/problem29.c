#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    printf("%d",rand()%6+1);
    printf("%d",rand()%6+1);
    printf("%d",rand()%6+1);
    printf("%d",rand()%6+1);
    printf("%d",rand()%6+1);
    printf("%d",rand()%6+1);
    printf("%d",rand()%6+1);
    return 0;
}