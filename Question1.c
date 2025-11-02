#include<stdio.h>
void conversion(int *n);
int main (){
    int code;
    int binary[32];
    printf("Enter code = ");
    scanf("%d",&code);
    if (code>0){
    conversion(&code);}
}
void conversion(int *n){
    int binary[32];
    int i = 0;
    while (*n > 0) {
        binary[i] = *n % 2;  
        *n = *n / 2;        
        i++;
    }
    printf("Binary = ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}
