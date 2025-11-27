#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("%d is not a perfect number.\n", n);
        return 0;
    }

    i = 1;
    while (i < n) {
        if (n % i == 0) {
            sum += i;
        }
        i++;
    }

    if (sum == n) {
        printf("%d is a Perfect number.\n", n);
    } else {
        printf("%d is not a Perfect number.\n", n);
    }
    return 0;
}