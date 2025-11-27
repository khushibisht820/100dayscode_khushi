#include <stdio.h>
#include <math.h>

int main() {
    int n, digits, first_digit, last_digit, swapped_num;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int original = n;

    if (n < 10) {
        swapped_num = n;
    } else {
        last_digit = n % 10;
        int temp = n;

        digits = 0;
        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        first_digit = n / (int)round(pow(10, digits - 1));

        int middle_part = n % (int)round(pow(10, digits - 1));
        middle_part = middle_part / 10;

        swapped_num = last_digit * (int)round(pow(10, digits - 1)) + middle_part * 10 + first_digit;
    }

    printf("Original number: %d\n", original);
    printf("Number after swapping first and last digit: %d\n", swapped_num);
    return 0;
}