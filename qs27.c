#include <stdio.h>

int main() {
    int n, sum = 0, count = 0, num = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (count < n) {
        sum += num;
        num += 2;
        count++;
    }

    printf("Sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}