#include <stdio.h>
#include <ctype.h>

void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            // Convert lowercase to uppercase (subtract 32 from ASCII)
            str[i] = str[i] - 32;
        } else if (isupper(str[i])) {
            // Convert uppercase to lowercase (add 32 to ASCII)
            str[i] = str[i] + 32;
        }
    }
}

int main() {
    char str[] = "HeLlO wOrLd 123";
    
    printf("Original string: %s\n", str);
    toggleCase(str);
    printf("Toggled string: %s\n", str);
    
    return 0;
}