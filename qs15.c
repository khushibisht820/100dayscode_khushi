#include <stdio.h>

int main() {
    char ch;

    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase Alphabet\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase Alphabet\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }

    return 0;
}