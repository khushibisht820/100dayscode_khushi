#include <stdio.h>

void transposeMatrix(int rows, int cols, int matrix[rows][cols], int transpose[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3;
    int cols = 2;
    int matrix[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int transpose[2][3];
    
    printf("Original Matrix:\n");
    printMatrix(rows, cols, matrix);
    
    transposeMatrix(rows, cols, matrix, transpose);
    
    printf("\nTranspose Matrix:\n");
    printMatrix(cols, rows, transpose);
    
    return 0;
}