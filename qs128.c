#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Function to check if a character is a vowel (case-insensitive)
int is_vowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    FILE *file_ptr;
    int ch;
    int vowel_count = 0;
    int consonant_count = 0;

    file_ptr = fopen("input.txt", "r");
    if (file_ptr == NULL) {
        perror("Error opening input.txt");
        return 1;
    }

    while ((ch = fgetc(file_ptr)) != EOF) {
        // Check if the character is an alphabet
        if (isalpha(ch)) {
            if (is_vowel(ch)) {
                vowel_count++;
            } else {
                consonant_count++;
            }
        }
        // Digits and special characters are ignored as per the requirement
    }

    fclose(file_ptr);

    printf("Vowel count: %d\n", vowel_count);
    printf("Consonant count: %d\n", consonant_count);

    return 0;
}