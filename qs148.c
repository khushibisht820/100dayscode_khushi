#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

// Function to compare two Student structures
bool areIdentical(struct Student s1, struct Student s2) {
    if (s1.roll_no != s2.roll_no) {
        return false;
    }
    if (s1.marks != s2.marks) {
        return false;
    }
    // Use strcmp for string comparison
    if (strcmp(s1.name, s2.name) != 0) {
        return false;
    }
    return true;
}

int main() {
    struct Student sA = {101, "Karan", 90.5};
    struct Student sB = {101, "Karan", 90.5};
    struct Student sC = {102, "Lata", 90.5};

    if (areIdentical(sA, sB)) {
        printf("sA and sB are identical.\n");
    } else {
        printf("sA and sB are NOT identical.\n");
    }

    if (areIdentical(sA, sC)) {
        printf("sA and sC are identical.\n");
    } else {
        printf("sA and sC are NOT identical.\n");
    }

    return 0;
}