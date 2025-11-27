#include <stdio.h>

#define MAX_STUDENTS 5

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int i;

    // Reading data for 5 students
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Printing data for all 5 students
    printf("\n--- All Student Data ---\n");
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}