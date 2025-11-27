#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void solve_q115(char* s, char* t) {
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return;
    }
        
    int counts[26] = {0};
    
    for (int i = 0; s[i] != '\0'; i++) {
        counts[s[i] - 'a']++;
    }
        
    for (int i = 0; t[i] != '\0'; i++) {
        counts[t[i] - 'a']--;
    }
        
    bool is_anagram = true;
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            is_anagram = false;
            break;
        }
    }
            
    if (is_anagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
}