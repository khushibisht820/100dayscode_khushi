#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file_ptr;
    char filename[100];
    char new_line[256];

    printf("Enter filename to append to: ");
    if (scanf("%99s", filename) != 1) return 1;
    
    // Consume the rest of the line before fgets
    while (getchar() != '\n'); 

    // Open file in append mode
    file_ptr = fopen(filename, "a");
    if (file_ptr == NULL) {
        perror("Error opening file for appending");
        return 1;
    }

    printf("Enter the text to append (max 255 characters):\n");
    // Read the new line of text
    if (fgets(new_line, sizeof(new_line), stdin) == NULL) {
        fclose(file_ptr);
        return 1;
    }
    
    // Append the text to the file
    fprintf(file_ptr, "%s", new_line);

    fclose(file_ptr);

    printf("Text successfully appended to %s.\n", filename);

    return 0;
}