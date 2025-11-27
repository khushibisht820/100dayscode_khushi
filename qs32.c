#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int original = n;
    int temp = n;

    while (temp != 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }

    if (original == reversed) {
        printf("%d is a Palindrome number.\n", original);
    } else {
        printf("%d is not a Palindrome number.\n", original);
    }
    return 0;
}