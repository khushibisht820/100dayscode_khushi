#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    char name[50];
    int age;

    file_ptr = fopen("info.txt", "w");
    if (file_ptr == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("Enter your name: ");
    if (scanf("%49s", name) != 1) {
        fclose(file_ptr);
        return 1;
    }
    
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        fclose(file_ptr);
        return 1;
    }

    // Write data to the file
    fprintf(file_ptr, "Name: %s\nAge: %d\n", name, age);

    fclose(file_ptr);

    printf("Data successfully saved to info.txt.\n");

    return 0;
}