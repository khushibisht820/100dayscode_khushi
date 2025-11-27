#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants(char str[], int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
    }
}

int main() {
    char str[] = "Programming in C";
    int vowels = 0;
    int consonants = 0;
    
    countVowelsAndConsonants(str, &vowels, &consonants);
    
    printf("String: \"%s\"\n", str);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}