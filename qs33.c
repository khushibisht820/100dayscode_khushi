#include <stdio.h>
#include <math.h>

int count_digits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int n, original, remainder, sum = 0, digits;
    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;
    digits = count_digits(n);
    int temp = n;

    while (temp != 0) {
        remainder = temp % 10;
        sum += round(pow(remainder, digits));
        temp /= 10;
    }

    if (original == sum) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }
    return 0;
}