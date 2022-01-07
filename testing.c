#include <stdio.h>

int main(void) {
    int y = 5;
    int x;
    printf("%d",y = (x = 10 * y));
    printf("%d %d", y, x);
    return 0;
}