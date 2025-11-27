#include <stdio.h>

void printPerLine(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
}

int main() {
    char str[] = "Coding";
    
    printf("Characters of the string:\n");
    printPerLine(str);
    
    return 0;
}