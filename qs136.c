#include <stdio.h>

enum Operation {
    ADD = 1,      // Assign 1 for menu choice
    SUBTRACT,   // 2
    MULTIPLY    // 3
};

void perform_operation(enum Operation op, int a, int b) {
    int result;
    
    switch (op) {
        case ADD:
            result = a + b;
            printf("Operation: ADD\nResult of %d + %d = %d\n", a, b, result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Operation: SUBTRACT\nResult of %d - %d = %d\n", a, b, result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Operation: MULTIPLY\nResult of %d * %d = %d\n", a, b, result);
            break;
        default:
            printf("Invalid operation choice.\n");
    }
}

int main() {
    int choice = 0;
    int num1 = 10;
    int num2 = 5;

    printf("Enter operation choice (1: ADD, 2: SUBTRACT, 3: MULTIPLY): ");
    if (scanf("%d", &choice) != 1) return 1;

    perform_operation(choice, num1, num2);
    
    return 0;
}