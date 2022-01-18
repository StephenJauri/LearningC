#include <stdio.h>

int factorial(int num);

int main(void){
    double e = 1;
    double eOld;
    for(int i = 1;(e-eOld)>0.0000001;i++){
        eOld = e;
        e = eOld + (double)1/(factorial(i));
    }
    printf("%0.15lf",e);
    return 0;
}

int factorial(int num){
    int product = 1;
    for(int i = 1;i<=num;i++){
        product *= i;
    }
    return product;
}