#include <stdio.h>
#include <ctype.h>

void printInitials(char name[]) {
    printf("%c. ", toupper(name[0]));
    
    for (int i = 1; name[i] != '\0'; i++) {
        // Check for a space followed by a letter
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c. ", toupper(name[i + 1]));
        }
    }
    printf("\n");
}

int main() {
    char name1[] = "soumik maity";
    char name2[] = "ajay kumar singh";
    
    printf("Initials for \"%s\": ", name1);
    printInitials(name1);
    
    printf("Initials for \"%s\": ", name2);
    printInitials(name2);
    
    return 0;
}