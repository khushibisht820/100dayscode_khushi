#include <stdio.h>
#include <string.h>

void printAllSubstrings(char str[]) {
    int len = strlen(str);
    
    printf("All substrings of \"%s\":\n", str);
    
    // i is the starting point of the substring
    for (int i = 0; i < len; i++) {
        // j is the ending point (exclusive) of the substring
        for (int j = i; j < len; j++) {
            // k iterates from the starting point i to the ending point j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
}

int main() {
    char str[] = "abc";
    printAllSubstrings(str);
    
    return 0;
}