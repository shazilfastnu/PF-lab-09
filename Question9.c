#include<stdio.h>

float calculateItemTotal(int quantity, float price);

int main() {
    char customerName[50];
    int numofitems;
    float totalBill;
    int i;
    char itemName[50];
    int quantity;
    float price;
    float itemTotal;
    
    totalBill = 0;
    
    printf("Enter customer name: ");
    scanf("%s", customerName);
    
    printf("Enter number of items: ");
    scanf("%d", &numofitems);
    
    printf("\n");
    
    for (i = 0; i < numofitems; i++) {
        printf("Item %d:\n", i + 1);
        printf("Enter item name: ");
        scanf("%s", itemName);
        
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        
        printf("Enter price per unit: ");
        scanf("%f", &price);
        
        itemTotal = calculateItemTotal(quantity, price);
        totalBill = totalBill + itemTotal;
        
        printf("Total for %s: %.2f\n\n", itemName, itemTotal);
    }
    
    printf("============================\n");
    printf("Customer: %s\n", customerName);
    printf("Total Bill: %.2f\n", totalBill);
    printf("============================\n");
    
    return 0;
}

float calculateItemTotal(int quantity, float price) {
    return quantity * price;
}