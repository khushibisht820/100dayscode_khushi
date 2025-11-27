#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLongestWord(char sentence[], char longestWord[]) {
    int maxLen = 0;
    int currentLen = 0;
    int start = 0;
    int end = 0;
    int maxStart = 0;
    int maxEnd = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isalpha(sentence[i])) {
            if (currentLen == 0) {
                start = i;
            }
            currentLen++;
            end = i;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStart = start;
                maxEnd = end;
            }
            currentLen = 0;
        }
    }

    // Check for the last word
    if (currentLen > maxLen) {
        maxLen = currentLen;
        maxStart = start;
        maxEnd = end;
    }

    // Copy the longest word
    for (int i = 0; i < maxLen; i++) {
        longestWord[i] = sentence[maxStart + i];
    }
    longestWord[maxLen] = '\0';
}

int main() {
    char sentence[] = "The quick brown fox jumps over the lazy dog";
    char longestWord[50];
    
    findLongestWord(sentence, longestWord);
    
    printf("Sentence: \"%s\"\n", sentence);
    printf("Longest word: %s (Length: %lu)\n", longestWord, strlen(longestWord));
    
    return 0;
}