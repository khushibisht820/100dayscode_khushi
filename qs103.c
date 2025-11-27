#include <stdio.h>

int solve_q103(int nums[], int size) {
    long long total_sum = 0;
    for (int i = 0; i < size; i++) {
        total_sum += nums[i];
    }

    long long left_sum = 0;
    for (int i = 0; i < size; i++) {
        long long right_sum = total_sum - left_sum - nums[i];
        if (left_sum == right_sum) {
            return i;
        }
        left_sum += nums[i];
    }
    return -1;
}