#include <stdio.h>
#include <stdlib.h>

#define MAX_RECORDS 3

typedef struct {
    char name[50];
    int roll_number;
    float marks;
} Student;

void write_records(const char *filename, Student students[], int num_records) {
    FILE *file_ptr = fopen(filename, "w");
    if (file_ptr == NULL) {
        perror("Error opening file for writing");
        return;
    }
    
    int i;
    for (i = 0; i < num_records; i++) {
        fprintf(file_ptr, "%s %d %.2f\n", students[i].name, students[i].roll_number, students[i].marks);
    }
    
    fclose(file_ptr);
    printf("Records successfully written to %s.\n", filename);
}

void read_and_display_records(const char *filename) {
    FILE *file_ptr = fopen(filename, "r");
    if (file_ptr == NULL) {
        perror("Error opening file for reading");
        return;
    }
    
    Student student;
    int count = 0;
    
    printf("\nReading records from file:\n");
    printf("Name\tRoll No\tMarks\n");
    printf("---------------------------\n");
    
    // Read records until fscanf fails (returns less than 3) or EOF
    while (fscanf(file_ptr, "%49s %d %f", student.name, &student.roll_number, &student.marks) == 3) {
        printf("%s\t%d\t%.2f\n", student.name, student.roll_number, student.marks);
        count++;
    }
    
    fclose(file_ptr);
    printf("Total records read: %d\n", count);
}

int main() {
    Student students[MAX_RECORDS] = {
        {"Alice", 101, 85.5},
        {"Bob", 102, 90.0},
        {"Charlie", 103, 78.5}
    };
    
    const char *filename = "student_records.txt";
    
    write_records(filename, students, MAX_RECORDS);
    read_and_display_records(filename);
    
    return 0;
}