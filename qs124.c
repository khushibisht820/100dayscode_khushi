#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source_ptr, *dest_ptr;
    char source_filename[100];
    char dest_filename[100];
    int ch;

    printf("Enter source filename: ");
    if (scanf("%99s", source_filename) != 1) return 1;

    printf("Enter destination filename: ");
    if (scanf("%99s", dest_filename) != 1) return 1;

    // Open source file for reading
    source_ptr = fopen(source_filename, "r");
    if (source_ptr == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Open destination file for writing (will create or overwrite)
    dest_ptr = fopen(dest_filename, "w");
    if (dest_ptr == NULL) {
        perror("Error opening destination file");
        fclose(source_ptr);
        return 1;
    }

    // Read character by character and write to destination
    while ((ch = fgetc(source_ptr)) != EOF) {
        fputc(ch, dest_ptr);
    }

    printf("Content successfully copied from %s to %s.\n", source_filename, dest_filename);

    fclose(source_ptr);
    fclose(dest_ptr);

    return 0;
}