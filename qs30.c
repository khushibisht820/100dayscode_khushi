#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int original = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("The reverse of %d is: %d\n", original, reversed);
    return 0;
}