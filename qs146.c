#include <stdio.h>

// Inner Structure: Date
struct Date {
    int day;
    int month;
    int year;
};

// Outer Structure: Employee, containing a Date struct
struct Employee {
    int id;
    char name[50];
    struct Date joining_date; // Nested structure
};

int main() {
    struct Employee emp1 = {
        101, 
        "Alex Johnson", 
        {25, 10, 2023} // Initializing the nested Date structure
    };

    printf("--- Employee Details ---\n");
    printf("ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Joining Date: %d/%d/%d\n", 
           emp1.joining_date.day, 
           emp1.joining_date.month, 
           emp1.joining_date.year);

    return 0;
}