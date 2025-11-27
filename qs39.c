#include <stdio.h>

int main() {
    int n, remainder;
    long long product = 1;
    int has_odd = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int temp = n;

    while (temp != 0) {
        remainder = temp % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            has_odd = 1;
        }
        temp /= 10;
    }

    if (has_odd) {
        printf("Product of odd digits of %d is: %lld\n", n, product);
    } else {
        printf("No odd digits found in %d. Product is 0 (or 1 if you consider an empty product).\n", n);
    }
    return 0;
}