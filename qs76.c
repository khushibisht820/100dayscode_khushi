#include <stdio.h>
#include <stdbool.h>

bool isSymmetric(int size, int matrix[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int size = 3;
    // Symmetric Matrix
    int symMatrix[3][3] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};
    
    if (isSymmetric(size, symMatrix)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    
    return 0;
}