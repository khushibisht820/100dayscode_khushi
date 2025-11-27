#include <stdio.h>
#include <stdlib.h>

#define MAX_VAL 100000 // Placeholder max value for array-based map

void solve_q116(int nums[], int size, int target) {
    // Array to store index + 1 for fast lookup (index 0 means not seen)
    int index_map[MAX_VAL + 1]; 
    for(int i = 0; i <= MAX_VAL; i++) index_map[i] = 0;
    
    for (int i = 0; i < size; i++) {
        int complement = target - nums[i];
        
        if (complement > 0 && complement <= MAX_VAL && index_map[complement] != 0) {
            // Solution found: print stored index and current index i
            printf("%d %d\n", index_map[complement] - 1, i);
            return;
        }
        
        // Store current number and its index + 1
        if (nums[i] <= MAX_VAL) {
            index_map[nums[i]] = i + 1;
        }
    }
    printf("-1 -1\n");
}