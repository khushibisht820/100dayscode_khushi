#include <stdio.h>
#include <string.h>

int main() {
    long long binary_num;
    printf("Enter a binary number (e.g., 10110): ");
    scanf("%lld", &binary_num);

    long long original = binary_num;
    long long complement = 0;
    long long multiplier = 1;

    while (binary_num > 0) {
        int digit = binary_num % 10;
        if (digit == 0) {
            complement += 1 * multiplier;
        } else if (digit == 1) {
            complement += 0 * multiplier;
        }
        multiplier *= 10;
        binary_num /= 10;
    }

    printf("1's complement of %lld is: %lld\n", original, complement);
    return 0;
}