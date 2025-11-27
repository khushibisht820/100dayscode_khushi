#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    // 1. Declare a pointer to the structure
    struct Employee *empPtr;

    // 2. Dynamically allocate memory for one Employee struct
    empPtr = (struct Employee *)malloc(sizeof(struct Employee));

    // Check if allocation was successful
    if (empPtr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 3. Assign values using the arrow operator (->)
    empPtr->id = 205;
    strcpy(empPtr->name, "Sonia D");
    empPtr->salary = 62500.75;

    // 4. Print details
    printf("--- Dynamically Allocated Employee Details ---\n");
    printf("ID: %d\n", empPtr->id);
    printf("Name: %s\n", empPtr->name);
    printf("Salary: %.2f\n", empPtr->salary);

    // 5. Free the allocated memory
    free(empPtr);
    empPtr = NULL; // Good practice to set pointer to NULL after free

    return 0;
}