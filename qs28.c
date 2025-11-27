#include <stdio.h>

int main() {
    int n, i = 2;
    long long product = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n) {
        product *= i;
        i += 2;
    }

    printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
    return 0;
}