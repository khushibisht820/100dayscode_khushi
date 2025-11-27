
#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
}

int solve_q113(int arr[], int size, int k) {
    if (k > size || k <= 0) {
        return -1;
    }
        
    qsort(arr, size, sizeof(int), compare);
    return arr[k - 1];
}