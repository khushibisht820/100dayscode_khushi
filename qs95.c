#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Simple implementation of strstr (find substring)
char* custom_strstr(char* haystack, char* needle) {
    if (*needle == '\0') return haystack;

    for (char *p1 = haystack; *p1 != '\0'; p1++) {
        char *p1_temp = p1;
        char *p2 = needle;
        
        while (*p1_temp == *p2) {
            p1_temp++;
            p2++;
            if (*p2 == '\0') return p1; // Found
        }
    }
    return NULL;
}

bool isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2 || len1 == 0) {
        return false;
    }
    
    // Concatenate str1 with itself
    char temp[len1 * 2 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of the concatenated string
    // Using custom_strstr to avoid standard library functions.
    if (custom_strstr(temp, str2) != NULL) {
        return true;
    }
    
    return false;
}

int main() {
    char str1[] = "abcde";
    char str2[] = "cdeab"; // Rotation
    char str3[] = "acebd"; // Not a rotation
    
    printf("\"%s\" and \"%s\" are rotations: %s\n", str1, str2, isRotation(str1, str2) ? "Yes" : "No");
    printf("\"%s\" and \"%s\" are rotations: %s\n", str1, str3, isRotation(str1, str3) ? "Yes" : "No");
    
    return 0;
}