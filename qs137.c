#include <stdio.h>

enum UserRole {
    ADMIN, // 0
    USER,  // 1
    GUEST  // 2
};

void display_role_message(enum UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Role: ADMIN - Full system access granted.\n");
            break;
        case USER:
            printf("Role: USER - Standard access to resources.\n");
            break;
        case GUEST:
            printf("Role: GUEST - Limited read-only access.\n");
            break;
        default:
            printf("Unknown User Role.\n");
    }
}

int main() {
    enum UserRole current_role = USER; // Example usage
    
    display_role_message(ADMIN);
    display_role_message(current_role);
    display_role_message(GUEST);
    
    return 0;
}