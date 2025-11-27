#include <stdio.h>

void addMatrices(int rows, int cols, int A[rows][cols], int B[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
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
    int cols = 3;
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3];
    
    addMatrices(rows, cols, A, B, C);
    
    printf("Matrix A:\n");
    printMatrix(rows, cols, A);
    printf("\nMatrix B:\n");
    printMatrix(rows, cols, B);
    printf("\nSum Matrix (A + B):\n");
    printMatrix(rows, cols, C);
    
    return 0;
}