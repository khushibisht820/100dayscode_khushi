#include <stdio.h>
#include <stdlib.h>

int* solve_q108(int nums[], int size) {
    int* result = (int*)malloc(size * sizeof(int));
    if (result == NULL) return NULL;
    
    long long prefix = 1;
    for (int i = 0; i < size; i++) {
        result[i] = (int)prefix;
        prefix *= nums[i];
    }
        
    long long suffix = 1;
    for (int i = size - 1; i >= 0; i--) {
        result[i] *= (int)suffix;
        suffix *= nums[i];
    }
        
    return result;
}