#include <stdio.h>

int solve_q105(int nums[], int size) {
    int count = 0;
    int majority_element = -1;

    for (int i = 0; i < size; i++) {
        if (count == 0) {
            majority_element = nums[i];
            count = 1;
        } else if (nums[i] == majority_element) {
            count++;
        } else {
            count--;
        }
    }
    
    count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == majority_element) {
            count++;
        }
    }
            
    if (count > size / 2) {
        return majority_element;
    } else {
        return -1;
    }
}