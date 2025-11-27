#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_sentence_case(char *str) {
    int i;
    int len = strlen(str);
    if (len == 0) return;

    // Convert the first character to uppercase
    str[0] = toupper(str[0]);

    // Convert the rest of the characters to lowercase
    for (i = 1; i < len; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }
    
    // Remove the trailing newline character if it exists
    str[strcspn(str, "\n")] = 0;

    to_sentence_case(str);

    printf("Sentence case string: %s\n", str);

    return 0;
}