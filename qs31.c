#include <stdio.h>
#include <math.h>

int main() {
    int n;
    long long binary = 0;
    int remainder, i = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int original = n;
    if (n < 0) {
        printf("Binary representation is not calculated for negative numbers in this program.\n");
        return 0;
    }
    if (n == 0) {
        printf("Binary equivalent of 0 is: 0\n");
        return 0;
    }

    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binary += remainder * i;
        i *= 10;
    }

    printf("Binary equivalent of %d is: %lld\n", original, binary);
    return 0;
}