#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void removeVowels(char str[]) {
    int i, j = 0;
    
    for (i = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            str[j] = str[i];
            j++;
        }
    }
    // Terminate the new string
    str[j] = '\0';
}

int main() {
    char str[] = "Programming";
    
    printf("Original string: %s\n", str);
    removeVowels(str);
    printf("String without vowels: %s\n", str);
    
    return 0;
}