#include <stdio.h>

void solve_q107(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int previous_greater = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previous_greater = arr[j];
                break;
            }
        }
        printf("%d", previous_greater);
        if (i < size - 1) {
            printf(",");
        }
    }
    printf("\n");
}