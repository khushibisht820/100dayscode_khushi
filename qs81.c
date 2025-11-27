#include <stdio.h>

int stringLength(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char str[] = "Hello World!";
    int length = stringLength(str);
    
    printf("The string is: \"%s\"\n", str);
    printf("The length of the string is: %d\n", length);
    
    return 0;
}