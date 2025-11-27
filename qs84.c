#include <stdio.h>

void toUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        // ASCII difference between 'a' and 'A' is 32 (a=97, A=65)
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char str[] = "hello world";
    
    printf("Original string: %s\n", str);
    toUppercase(str);
    printf("Uppercase string: %s\n", str);
    
    return 0;
}