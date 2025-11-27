#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        i = 1;
        while (i <= n) {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d is: %lld\n", n, factorial);
    }
    return 0;
}