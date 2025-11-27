#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int solve_q114(char* s) {
    int n = strlen(s);
    if (n == 0) {
        return 0;
    }
        
    // last_seen[char] stores the index of the character's last appearance + 1
    // 256 for extended ASCII
    int last_seen[256];
    for (int i = 0; i < 256; i++) {
        last_seen[i] = 0; 
    }
    
    int left = 0;
    int max_length = 0;
    
    for (int right = 0; right < n; right++) {
        // Update left pointer if the character is a repeat within the current window
        if (last_seen[s[right]] > left) {
            left = last_seen[s[right]];
        }
            
        // Update max length
        max_length = max(max_length, right - left + 1);
        
        // Record the current character's position + 1 for next check
        last_seen[s[right]] = right + 1;
    }
        
    return max_length;
}