#include <stdio.h>
#include <string.h>

// Function to reverse a segment of the string (a word)
void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWordsInSentence(char str[]) {
    int len = strlen(str);
    int wordStart = 0;

    for (int i = 0; i <= len; i++) {
        // If current char is a space or null terminator, it marks the end of a word
        if (str[i] == ' ' || str[i] == '\0') {
            // The word is from wordStart up to i-1
            reverseWord(str, wordStart, i - 1);
            wordStart = i + 1; // Start of the next word
        }
    }
}

int main() {
    char str[] = "Hello World Programming";
    
    printf("Original sentence: %s\n", str);
    reverseWordsInSentence(str);
    printf("Modified sentence: %s\n", str);
    
    return 0;
}