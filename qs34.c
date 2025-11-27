#include <stdio.h>

int main() {
    int n, i = 2, is_prime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        is_prime = 0;
    } else {
        while (i * i <= n) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
            i++;
        }
    }

    if (is_prime) {
        printf("%d is a Prime number.\n", n);
    } else {
        printf("%d is not a Prime number.\n", n);
    }
    return 0;
}