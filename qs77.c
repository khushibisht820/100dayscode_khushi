#include <stdio.h>
#include <stdbool.h>

bool diagonalDistinct(int size, int matrix[size][size]) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            // Compare main diagonal elements: matrix[i][i] and matrix[j][j]
            if (matrix[i][i] == matrix[j][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int size = 3;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    if (diagonalDistinct(size, matrix)) {
        printf("The main diagonal elements are distinct.\n");
    } else {
        printf("The main diagonal elements are NOT distinct.\n");
    }
    
    return 0;
}