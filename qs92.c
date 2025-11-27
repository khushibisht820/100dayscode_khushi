#include <stdio.h>
#include <ctype.h>

char findFirstRepeating(char str[]) {
    // Array to keep track of character counts. Size 26 for 'a' through 'z'.
    int count[26] = {0};
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        if (islower(ch)) {
            int index = ch - 'a';
            count[index]++;
        }
    }
    
    // Scan the string again to find the first character with a count > 1
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        if (islower(ch)) {
            int index = ch - 'a';
            if (count[index] > 1) {
                return ch;
            }
        }
    }
    
    return '\0'; // Return null character if no repeating character is found
}

int main() {
    char str[] = "hello world";
    
    char result = findFirstRepeating(str);
    
    if (result != '\0') {
        printf("The first repeating lowercase alphabet is: %c\n", result);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }
    
    return 0;
}