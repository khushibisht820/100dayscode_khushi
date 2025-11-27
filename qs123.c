#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *file_ptr;
    char ch;
    int char_count = 0;
    int word_count = 0;
    int line_count = 0;
    int in_word = 0; // Flag to check if currently inside a word

    file_ptr = fopen("input.txt", "r");
    if (file_ptr == NULL) {
        perror("Error opening input.txt");
        return 1;
    }
    
    // Initialize with 1 line assuming a non-empty file
    line_count = 1; 

    while ((ch = fgetc(file_ptr)) != EOF) {
        char_count++;

        if (ch == '\n') {
            line_count++;
            in_word = 0; // Reset word flag at end of line
        } else if (isspace(ch)) {
            in_word = 0; // Not in a word if it's any whitespace
        } else {
            // Found a non-space character
            if (in_word == 0) {
                word_count++; // Start of a new word
                in_word = 1;
            }
        }
    }

    // Adjust line count for an empty file or a file that doesn't end with a newline
    if (char_count == 0) {
        line_count = 0;
    }

    fclose(file_ptr);

    printf("Character count: %d\n", char_count);
    printf("Word count: %d\n", word_count);
    printf("Line count: %d\n", line_count);

    return 0;
}