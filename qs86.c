#include <stdio.h>
#include <stdbool.h>

// Simple function to get string length without using strlen()
int getStringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

bool isPalindrome(char str[]) {
    int length = getStringLength(str);
    int i = 0;
    int j = length - 1;
    
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    char str1[] = "level";
    char str2[] = "hello";
    
    printf("String \"%s\" is a palindrome: %s\n", str1, isPalindrome(str1) ? "Yes" : "No");
    printf("String \"%s\" is a palindrome: %s\n", str2, isPalindrome(str2) ? "Yes" : "No");
    
    return 0;
}