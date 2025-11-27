#include <stdio.h>

// Define an enum with explicitly assigned values
enum Status {
    ERROR = -1,
    PENDING = 0,
    SUCCESS = 1,
    COMPLETED = 100
};

int main() {
    enum Status currentStatus = COMPLETED;
    printf("Status SUCCESS value: %d\n", SUCCESS);
    printf("Status ERROR value: %d\n", ERROR);
    printf("Current status value: %d\n", currentStatus);
    
    // You can even treat them as integers in expressions
    int total = SUCCESS + PENDING;
    printf("Success + Pending: %d\n", total);

    return 0;
}