#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    printf("%d\n",rand()%6*3+1);
    printf("%d\n",rand()%6*3+1);
    printf("%d\n",rand()%6*3+1);
    printf("%d\n",rand()%6*3+1);
    printf("%d\n",rand()%6*3+1);
    printf("%d\n",rand()%6*3+1);
    printf("%d\n",rand()%6*3+1);
    return 0;
}