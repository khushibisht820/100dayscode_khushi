#include <stdio.h>
#include <math.h>

int solve_q104(int n) {
    long long total_sum = (long long)n * (n + 1) / 2;
    long long x_squared = total_sum;
    
    double x_float = sqrt((double)x_squared);
    int x = (int)x_float;
    
    if ((long long)x * x == x_squared && x >= 1 && x <= n) {
        return x;
    } else {
        return -1;
    }
}