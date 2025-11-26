#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    scanf("%d", &num1);
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);

    if (num2 != 0) {
        quotient = (float)num1 / num2;
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Cannot divide by zero\n");
    }

    return 0;
}