#include <stdio.h>

void diagonalTraversal(int rows, int cols, int matrix[rows][cols]) {
    if (rows != cols) {
        printf("Diagonal traversal is usually performed on a square matrix.\n");
        return;
    }
    int size = rows; // For square matrix
    
    printf("Main Diagonal Elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", matrix[i][i]);
    }
    printf("\n");
    
    printf("Anti-Diagonal Elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", matrix[i][size - 1 - i]); // Elements on the anti-diagonal have i + j = size - 1
    }
    printf("\n");
}

int main() {
    int size = 3;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    diagonalTraversal(size, size, matrix);
    
    return 0;
}