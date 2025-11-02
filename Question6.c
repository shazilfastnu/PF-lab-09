#include <stdio.h>

// Function prototype
void multiply(int row1, int col1, int matrix1[][col1], int row2, int col2, int matrix2[][col2]);

int main() {
    int row1, col1, row2, col2;

    printf("Enter no of rows of first matrix = ");
    scanf("%d", &row1);
    printf("Enter no of columns of first matrix = ");
    scanf("%d", &col1);
    printf("Enter no of rows of second matrix = ");
    scanf("%d", &row2);
    printf("Enter no of columns of second matrix = ");
    scanf("%d", &col2);

    if (col1 != row2) {
        printf("Multiplication is not possible.\n");
        return 0;  
    }

    int matrix1[row1][col1];
    int matrix2[row2][col2];

   
    printf("Fill up your First matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

   
    printf("Fill up your Second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    
    printf("\nMultiplication Result:\n");
    multiply(row1, col1, matrix1, row2, col2, matrix2);

    return 0;
}


void multiply(int row1, int col1, int matrix1[][col1], int row2, int col2, int matrix2[][col2]) {
    int result[row1][col2];

    
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }

    
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

   
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
