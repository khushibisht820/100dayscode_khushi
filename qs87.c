#include <stdio.h>
#include <ctype.h>

void countCharacters(char str[], int *spaces, int *digits, int *special) {
    *spaces = 0;
    *digits = 0;
    *special = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            (*spaces)++;
        } else if (isdigit(str[i])) {
            (*digits)++;
        } else if (!isalnum(str[i])) {
            // If it's not alphanumeric (letter or digit), and not a space, count as special
            (*special)++;
        }
    }
}

int main() {
    char str[] = "Code @ 123. Day 44.";
    int spaces, digits, special;
    
    countCharacters(str, &spaces, &digits, &special);
    
    printf("String: \"%s\"\n", str);
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);
    
    return 0;
}