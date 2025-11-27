#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1;

    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\n--- Student Data ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}