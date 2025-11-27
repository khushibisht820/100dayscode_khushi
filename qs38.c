#include <stdio.h>

int main() {
    int n, sum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int temp = n;

    while (temp != 0) {
        remainder = temp % 10;
        sum += remainder;
        temp /= 10;
    }

    printf("Sum of digits of %d is: %d\n", n, sum);
    return 0;
}