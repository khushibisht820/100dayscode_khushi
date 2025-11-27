#include <stdio.h>

enum Status {
    SUCCESS, // 0
    FAILURE, // 1
    TIMEOUT  // 2
};

void print_status_message(enum Status status) {
    switch (status) {
        case SUCCESS:
            printf("Operation Status: SUCCESS - Task completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation Status: FAILURE - Task failed due to an error.\n");
            break;
        case TIMEOUT:
            printf("Operation Status: TIMEOUT - Task did not complete within the time limit.\n");
            break;
        default:
            printf("Unknown Status.\n");
    }
}

int main() {
    print_status_message(SUCCESS);
    print_status_message(FAILURE);
    print_status_message(TIMEOUT);
    
    return 0;
}