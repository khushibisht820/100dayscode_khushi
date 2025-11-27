#include <stdio.h>

int find_missing_number(int arr[], int n) {
    // Total sum should be the sum of integers from 0 to n: n * (n + 1) / 2
    long long expected_sum = (long long)n * (n + 1) / 2;
    long long actual_sum = 0;
    int i;

    for (i = 0; i < n; i++) {
        actual_sum += arr[i];
    }

    return (int)(expected_sum - actual_sum);
}

int main() {
    // Example array (size 5, numbers from 0 to 5) - Missing 3
    int arr[] = {5, 0, 1, 2, 4}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // The range is 0 to N, but the array size is N (due to one missing number).
    // The expected size of the complete set is n + 1 (0 to n).
    int missing_number = find_missing_number(arr, n + 1); 

    printf("The missing number is: %d\n", missing_number);
    
    return 0;
}