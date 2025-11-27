#include <stdio.h>

enum ExplicitValues {
    VALUE_A = 10,
    VALUE_B,    // 11 (Automatically increments from 10)
    VALUE_C,    // 12
    VALUE_D = 20,
    VALUE_E     // 21 (Automatically increments from 20)
};

int main() {
    printf("Explicitly assigned enum values:\n");
    printf("VALUE_A: %d\n", VALUE_A);
    printf("VALUE_B: %d\n", VALUE_B);
    printf("VALUE_C: %d\n", VALUE_C);
    printf("VALUE_D: %d\n", VALUE_D);
    printf("VALUE_E: %d\n", VALUE_E);
    
    return 0;
}