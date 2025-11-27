#include <stdio.h>
#include <ctype.h>
#include <string.h>

void printInitialsAndSurname(char name[]) {
    int lastSpaceIndex = -1;
    int len = strlen(name);

    // 1. Find the index of the last space (start of surname)
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ') {
            lastSpaceIndex = i;
        }
    }

    // 2. Print initials for all parts except the last one
    printf("%c. ", toupper(name[0]));
    for (int i = 1; i < lastSpaceIndex; i++) {
        if (name[i] == ' ') {
            printf("%c. ", toupper(name[i + 1]));
        }
    }

    // 3. Print the surname in full (from lastSpaceIndex + 1 to end)
    for (int i = lastSpaceIndex + 1; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");
}

int main() {
    char name1[] = "Soumik Maity";
    char name2[] = "Ajay Kumar Singh";
    
    printf("Formatted Name for \"%s\": ", name1);
    printInitialsAndSurname(name1);
    
    printf("Formatted Name for \"%s\": ", name2);
    printInitialsAndSurname(name2);
    
    return 0;
}