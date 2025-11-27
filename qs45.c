#include <stdio.h>

int main() {
    int n, i = 1;
    float sum = 0.0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    while (i <= n) {
        float numerator = 2 * i - 1;
        float denominator = 2 * i;
        if (i == 1) {
             sum += numerator;
        } else {
             sum += numerator / denominator;
        }
        i++;
    }

    printf("Sum of the series is: %.4f\n", sum);
    return 0;
}