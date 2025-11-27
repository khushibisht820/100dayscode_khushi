#include <stdio.h>

void rowSum(int rows, int cols, int matrix[rows][cols], int sumArray[]) {
    for (int i = 0; i < rows; i++) {
        int currentSum = 0;
        for (int j = 0; j < cols; j++) {
            currentSum += matrix[i][j];
        }
        sumArray[i] = currentSum;
    }
}

int main() {
    int rows = 3;
    int cols = 4;
    int matrix[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int rowSums[rows];
    
    rowSum(rows, cols, matrix, rowSums);
    
    printf("Row sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("Sum of Row %d: %d\n", i + 1, rowSums[i]);
    }
    
    return 0;
}