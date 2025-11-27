#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    char buffer[256]; // Buffer to hold each line

    file_ptr = fopen("input.txt", "r");
    if (file_ptr == NULL) {
        perror("Error opening input.txt");
        printf("Please ensure input.txt exists.\n");
        return 1;
    }

    printf("Content of input.txt:\n");
    // Read lines until EOF is reached
    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(file_ptr);

    return 0;
}