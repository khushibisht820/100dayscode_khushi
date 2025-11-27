#include <stdio.h>

int solve_q102(int arr[], int size, int x) {
    int low = 0;
    int high = size - 1;
    int ceiling_index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            ceiling_index = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ceiling_index;
}