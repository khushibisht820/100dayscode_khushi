#include <stdio.h>

int sumMainDiagonal(int size, int matrix[size][size]) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += matrix[i][i]; // Elements on the main diagonal have i == j
    }
    return sum;
}

int main() {
    int size = 3;
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    int sum = sumMainDiagonal(size, matrix);
    
    printf("The sum of the main diagonal elements is: %d\n", sum);
    
    return 0;
}