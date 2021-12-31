#include <stdio.h>

int main(void) {
    float wage = 13.0f;
    float hours = 38.0f;
    int days = 5;
    printf("You worked %d days this week.\n",days);
    printf("You worked %.1f hours this week.\n",hours);
    printf("You make $%.2f an hour.\n",wage);
    printf("You made $%.2f this week.",wage*hours);
    return 0;
}