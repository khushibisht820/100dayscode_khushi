#include <stdio.h>

#define MAX_STUDENTS 5

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // Initializing with sample data for demonstration
    struct Student students[MAX_STUDENTS] = {
        {"Alice", 101, 85.5},
        {"Bob", 102, 92.0},
        {"Charlie", 103, 78.5},
        {"David", 104, 95.0},
        {"Eve", 105, 89.5}
    };
    
    int i;
    int top_student_index = 0; // Assume the first student is the top student initially

    // Finding the student with the highest marks
    for (i = 1; i < MAX_STUDENTS; i++) {
        if (students[i].marks > students[top_student_index].marks) {
            top_student_index = i;
        }
    }

    // Printing the details of the top student
    printf("\n--- Top Student Details ---\n");
    printf("Name: %s\n", students[top_student_index].name);
    printf("Roll No: %d\n", students[top_student_index].roll_no);
    printf("Highest Marks: %.2f\n", students[top_student_index].marks);

    return 0;
}