#include <stdio.h>
#include <limits.h>

int solve_q109(int arr[], int size, int k) {
    if (k > size) {
        return 0;
    }
        
    long long current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    long long max_sum = current_sum;
    
    for (int i = k; i < size; i++) {
        current_sum += arr[i];
        current_sum -= arr[i - k];
        
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
        
    return (int)max_sum;
}