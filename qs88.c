#include <stdio.h>

void replaceSpaces(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}

int main() {
    char str[] = "this is a test string";
    
    printf("Original string: %s\n", str);
    replaceSpaces(str);
    printf("Modified string: %s\n", str);
    
    return 0;
}