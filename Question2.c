#include<stdio.h>
void swapArrays(int *a, int *b, int size);
int main (){
    int size = 5;
    int khi[] = {66, 77, 88, 99, 100};
    int lhe[] = {11, 22, 33, 44, 55};
    printf("\nKarachi = ");
    for (int i = 0; i < size ; i++)
    {
        printf("%d,",khi[i]);
    }
    printf("\nLahore = ");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",lhe[i]);
    }
    swapArrays(khi,lhe,size);
    printf("\nKarachi = ");
    for (int i = 0; i < size ; i++)
    {
        printf("%d,",khi[i]);
    }
    printf("\nLahore = ");
    for (int i = 0; i < size; i++)
    {
        printf("%d,",lhe[i]);
    }
    return 0;
}
void swapArrays(int *a, int *b, int size){
    int t[size];
    for (int i = 0; i < size; i++)
    {
        t[i] = a[i];
        a[i] = b[i];
        b[i] = t[i];
    }
    
}