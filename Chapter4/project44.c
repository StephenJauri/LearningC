#include <stdio.h>

#define LABOR_COST 0.35
#define TAX 0.085

void getInfo(float* width, float* length,float* discountPercent, float* cost);
void calculateCost(float width,float length,float discountPercent,float carpetCostPerFoot,float* area,float* carpetCost,float* laborCost,float* installedPrice, float* totalBeforeTax, float* totalWithTax, float* discountAmount,float* taxAmount);
float installPrice(float width,float length, float carpetCostPerFoot, float* area, float* carpetCost,float* laborCost);
float subTotal(float cost,float discountPercent,float* discountAmount);
float total(float subTotal, float* taxAmount);
void printReceipt(float length,float width, float area, float carpetCostPerFoot, float carpetCost, float laborCost, float installedPrice, float discountPercent, float discountAmount, float subTotal,float tax,float total);

int main(void) {
    float width, length, area, discountPercent,taxAmount, carpetCostPerFoot,discountAmount,carpetCost,laborCost,installedPrice,totalBeforeTax,totalWithTax;
    getInfo(&width, &length, &discountPercent, &carpetCostPerFoot);
    calculateCost(width,length,discountPercent,carpetCostPerFoot,&area,&carpetCost,&laborCost,&installedPrice, &totalBeforeTax,&totalWithTax,&discountAmount,&taxAmount);
    printReceipt(length,width,area,carpetCostPerFoot,carpetCost,laborCost,installedPrice,discountPercent,discountAmount,totalBeforeTax,taxAmount,totalWithTax);
    return 0;
}


void printReceipt(float length,float width, float area, float carpetCostPerFoot, float carpetCost, float laborCost, float installedPrice, float discountPercent, float discountAmount, float subTotal,float tax,float total){
    printf("\t\tMEASUREMENT\n");
    printf("Length\t\t\t\t%5.0f ft\n",length);
    printf("Width\t\t\t\t%5.0f ft\n",width);
    printf("Area\t\t\t\t%5.0f ft\n",area);
    printf("\n\t\t  CHARGES\n");
    printf("\nDESCRIPTION  COST/SQ.FT.      CHARGE\n");
    printf("-----------  -----------  -----------\n");
    printf("Carpet\t\t%7.2f\t    $%8.2f\n",carpetCostPerFoot,carpetCost);
    printf("Labor\t\t%7.2f\t     %8.2f\n",LABOR_COST,laborCost);
    printf("                          -----------\n");
    printf("INSTALLED PRICE\t\t    $%8.2f\n",installedPrice);
    printf("Discount\t%6.1f%%\t     %8.2f\n",discountPercent,discountAmount);
    printf("                          -----------\n");
    printf("SUBTOTAL\t\t    $%8.2f\n",subTotal);
    printf("Tax\t\t\t     %8.2f\n",tax);
    printf("TOTAL\t\t\t    $%8.2f\n",total);
    return;
}

void calculateCost(float width,float length,float discountPercent,float carpetCostPerFoot,float* area,float* carpetCost,float* laborCost,float* installedPrice, float* totalBeforeTax, float* totalWithTax,float* discountAmount,float* taxAmount){
    *installedPrice = installPrice(width,length,carpetCostPerFoot,area,carpetCost,laborCost);
    *totalBeforeTax = subTotal(*installedPrice,discountPercent,discountAmount);
    *totalWithTax = total(*totalBeforeTax,taxAmount);
    return;
}

float total(float subTotal,float* taxAmount){
    *taxAmount = subTotal * TAX;
    return subTotal + *taxAmount;
}

float subTotal(float cost,float discountPercent,float* discountAmount){
    *discountAmount = cost*(discountPercent/100);
    return cost-*discountAmount;
}

float installPrice(float width,float length, float carpetCostPerFoot, float* area, float* carpetCost,float* laborCost){
    *area = length * width;
    *carpetCost = *area * carpetCostPerFoot;
    *laborCost = *area * LABOR_COST;
    return *carpetCost + *laborCost;
}

void getInfo(float* width, float* length,float* discountPercent, float* carpetCostPerFoot){
    printf("How wide is the room (feet)?\t");
    scanf("%f",width);
    printf("How long is the room (feet)?\t");
    scanf("%f",length);
    printf("Customer discountPercent (percent)?\t");
    scanf("%f",discountPercent);
    printf("Cost per square foot (xxx.xx)?\t");
    scanf("%f",carpetCostPerFoot);
    return;
}