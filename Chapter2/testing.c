#include <stdio.h>

int main(void) {
    int num = -5;
    int num2 = -(num++);
    printf("%d",num2);
    return 0;
}