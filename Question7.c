#include<stdio.h>
int fact(int n);
int main (){
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    while (n<=0)
    {
        printf("number cannot be zero or negative\n");
         printf("Enter the number = ");
        scanf("%d",&n);
    }
    
    fact(n);
    printf("Factorial = %d",fact(n));
}
int fact (int n){
    int fact =1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
    
}