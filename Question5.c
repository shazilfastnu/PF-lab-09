#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int image[8][8];
    int i, j;

    srand(time(0)); // mam to gen new number everytime we run code.


    printf("Original Image:\n");
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            image[i][j] = rand() % 256; 
            printf("%3d\t", image[i][j]);
        }
        printf("\n");
    }

    printf("\nBrightened Image:\n");
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            image[i][j] += 20;
            if(image[i][j] > 255) image[i][j] = 255; 
            printf("%3d\t", image[i][j]);//mam %3d is written for neat prinitng.
        }
        printf("\n");
    }

    return 0;
}
