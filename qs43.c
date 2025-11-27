#include <stdio.h>

long long factorial(int num) {
    long long fact = 1;
    int i = 1;
    while (i <= num) {
        fact *= i;
        i++;
    }
    return fact;
}

int main() {
    int n, temp, sum = 0, remainder;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int original = n;
    temp = n;

    while (temp != 0) {
        remainder = temp % 10;
        sum += factorial(remainder);
        temp /= 10;
    }

    if (original == sum) {
        printf("%d is a Strong number.\n", original);
    } else {
        printf("%d is not a Strong number.\n", original);
    }
    return 0;
}