#include <stdio.h>

void solve_q106(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int next_greater = -1;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break;
            }
        }
        printf("%d", next_greater);
        if (i < size - 1) {
            printf(",");
        }
    }
    printf("\n");
}