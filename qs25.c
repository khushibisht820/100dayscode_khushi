#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("%d %% %d = %.2lf\n", (int)num1, (int)num2, result);
            } else {
                printf("Error! Modulo by zero.\n");
            }
            break;
        default:
            printf("Error! Operator is not correct\n");
    }
    return 0;
}