#include <stdio.h>

// Define an enum for days of the week
enum Day {
    SUN,  // Default value is 0
    MON,  // 1
    TUE,  // 2
    WED,  // 3
    THU,  // 4
    FRI,  // 5
    SAT   // 6
};

int main() {
    // Note: To print the *name* of the enum constant in pure C, you would
    // typically need a corresponding array of strings. This code prints the
    // enum's integer value.
    for (enum Day d = SUN; d <= SAT; d++) {
        printf("Day value: %d\n", d);
    }

    return 0;
}