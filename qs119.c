#include <stdio.h>

int find_repeated_element(int arr[], int size) {
    int repeated = 0;
    int i;
    
    // XOR all elements in the array
    for (i = 0; i < size; i++) {
        repeated ^= arr[i];
    }
    
    // XOR repeated with a sequence of numbers from 0 to size-2 (or 1 to size-1, assuming array contains 1 to N with one repeat)
    // The typical problem states numbers from 1 to N, with one repeated element.
    // If numbers are from 1 to N and size is N+1, the formula is XOR of array XOR of sequence (1 to N).
    // Let's assume the array contains numbers from 1 to size-1, with one repeated element.
    // The repeated element is the final XOR result if all other numbers cancel out.
    // For this problem, let's assume array has N elements, and numbers from 1 to N-1 are present, one element is repeated.
    int expected_xor = 0;
    for (i = 1; i <= size - 1; i++) {
        expected_xor ^= i;
    }
    
    // The result is the repeated number
    return repeated ^ expected_xor;
}

int main() {
    // Example array (size 5), numbers 1-4, repeated element is 3
    int arr[] = {1, 2, 3, 4, 3}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int repeated_element = find_repeated_element(arr, size);
    
    printf("The repeated element is: %d\n", repeated_element);
    
    return 0;
}