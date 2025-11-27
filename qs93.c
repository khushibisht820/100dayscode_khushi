#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define CHAR_COUNT 26

bool areAnagrams(char str1[], char str2[]) {
    int count1[CHAR_COUNT] = {0};
    int count2[CHAR_COUNT] = {0};
    int i;

    // Check if lengths are different (ignoring case/non-letters)
    // A more robust check should count *only* letters for true anagrams.
    
    // Count frequency of characters in str1
    for (i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i])) {
            count1[tolower(str1[i]) - 'a']++;
        }
    }

    // Count frequency of characters in str2
    for (i = 0; str2[i] != '\0'; i++) {
        if (isalpha(str2[i])) {
            count2[tolower(str2[i]) - 'a']++;
        }
    }

    // Compare counts
    for (i = 0; i < CHAR_COUNT; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    char strA[] = "listen";
    char strB[] = "silent";
    char strC[] = "hello";
    
    printf("\"%s\" and \"%s\" are anagrams: %s\n", strA, strB, areAnagrams(strA, strB) ? "Yes" : "No");
    printf("\"%s\" and \"%s\" are anagrams: %s\n", strA, strC, areAnagrams(strA, strC) ? "Yes" : "No");
    
    return 0;
}