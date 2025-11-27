#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that creates and returns a Student struct
struct Student getTopStudent() {
    struct Student topStudent = {"Genius", 999, 100.0};
    printf("Inside function: Top student details generated.\n");
    return topStudent;
}

int main() {
    struct Student winner;

    // The function returns a struct, which is copied into 'winner'
    winner = getTopStudent();

    printf("\n--- Returned Top Student Data ---\n");
    printf("Name: %s\n", winner.name);
    printf("Roll No: %d\n", winner.roll_no);
    printf("Marks: %.2f\n", winner.marks);

    return 0;
}