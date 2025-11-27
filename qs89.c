#include <stdio.h>

int countFrequency(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[] = "programming is fun";
    char ch = 'm';
    
    int count = countFrequency(str, ch);
    
    printf("The character '%c' appears %d times in \"%s\"\n", ch, count, str);
    
    return 0;
}