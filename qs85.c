#include <stdio.h>

// Simple function to get string length without using strlen()
int getStringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void reverseString(char str[]) {
    int length = getStringLength(str);
    int i = 0;
    int j = length - 1;
    
    while (i < j) {
        // Swap characters
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        
        i++;
        j--;
    }
}

int main() {
    char str[] = "madam";
    
    printf("Original string: %s\n", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    
    return 0;
}