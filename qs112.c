#include <stdio.h>
#include <limits.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int solve_q112(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
        
    int all_negative = 1;
    int largest_negative = INT_MIN;
    for(int i = 0; i < size; i++) {
        if (arr[i] >= 0) all_negative = 0;
        if (arr[i] > largest_negative) largest_negative = arr[i];
    }
    if (all_negative) return largest_negative;

    int current_max = 0;
    int global_max = INT_MIN;
    
    for (int i = 0; i < size; i++) {
        current_max += arr[i];
        if (current_max < 0) {
            current_max = 0;
        }
        global_max = max(global_max, current_max);
    }
        
    return global_max;
}