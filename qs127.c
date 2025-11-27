#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *input_ptr, *output_ptr;
    int ch;

    input_ptr = fopen("input.txt", "r");
    if (input_ptr == NULL) {
        perror("Error opening input.txt");
        return 1;
    }

    output_ptr = fopen("output.txt", "w");
    if (output_ptr == NULL) {
        perror("Error opening output.txt");
        fclose(input_ptr);
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(input_ptr)) != EOF) {
        // Convert to uppercase if it's a lowercase letter
        if (islower(ch)) {
            ch = toupper(ch);
        }
        // Write the character (original or uppercase) to output file
        fputc(ch, output_ptr);
    }

    printf("Text successfully converted to uppercase and saved to output.txt.\n");

    fclose(input_ptr);
    fclose(output_ptr);

    return 0;
}