#include <stdio.h>

int main(void) {
    int num1,num2,num3;
    printf("Give me three whole numbers seperated by spaces: ");
    scanf("%d %d %d",&num1, &num2, &num3);
    printf("\nNumbers in regular order\n%d\n%d\n%d\n",num1,num2,num3);
    printf("\nNumbers in reverse order\n%d\n%d\n%d\n",num3,num2,num1);
    return 0;
}