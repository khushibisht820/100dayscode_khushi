#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p1;
    
    // Assign values
    printf("Enter person's name: ");
    scanf("%s", p1.name);
    p1.gender = MALE; // Assigning the enum constant

    // Print details
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p1.name);
    
    // Print gender (as its integer value)
    printf("Gender (integer value): %d\n", p1.gender); 

    // Print gender (as a string for user readability)
    printf("Gender (string): ");
    switch (p1.gender) {
        case MALE: printf("MALE\n"); break;
        case FEMALE: printf("FEMALE\n"); break;
        case OTHER: printf("OTHER\n"); break;
        default: printf("UNKNOWN\n"); break;
    }

    return 0;
}