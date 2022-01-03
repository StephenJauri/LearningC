#include <stdio.h>

int main(void) {
    int quantity;
    float unitPrice;
    printf("Enter the amount of items you'd like to buy followed by the price seperated with a space.\n");
    scanf("%d %f",&quantity, &unitPrice);
    printf("\n\nItem Cost:\t$%0.2f\nQuantity:\t%d",unitPrice,quantity);
    return 0;
}