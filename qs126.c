#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    char filename[100];

    printf("Enter filename to check: ");
    if (scanf("%99s", filename) != 1) return 1;

    // Try to open the file in read mode
    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        // Do not return 1 immediately, the requirement is to print an error and handle.
    } else {
        printf("File '%s' exists and was successfully opened.\n", filename);
        // Example reading and displaying content if it exists
        int ch;
        printf("\nContent of the file:\n");
        while ((ch = fgetc(file_ptr)) != EOF) {
            putchar(ch);
        }
        printf("\n");
        fclose(file_ptr);
    }

    return 0;
}