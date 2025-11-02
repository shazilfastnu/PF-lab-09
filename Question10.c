#include<stdio.h>

int calculateHCF(int a, int b);
int calculateLCM(int a, int b);

int main (){
    int num1, num2;
    int choice;
    int HCF, LCM;
    
    printf("Enter two numbers = ");
    scanf("%d %d", &num1, &num2);
    
    printf("Enter 1 for HCF or Enter 2 for LCM = ");
    scanf("%d", &choice);
    
    switch (choice)
    {
    case 1:
        HCF = calculateHCF(num1, num2);
        printf("\nHCF of %d and %d is: %d\n", num1, num2, HCF);
        break;
    
    case 2:
        LCM = calculateLCM(num1, num2);
        printf("\nLCM of %d and %d is: %d\n", num1, num2, LCM);
        break;

    default:
        printf("Wrong choice entered.");
    }
    
    return 0;
}

int calculateHCF(int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calculateLCM(int a, int b){
    return (a * b) / calculateHCF(a, b);
}