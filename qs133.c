#include <stdio.h>

// Enum for months (JANUARY=1 by convention, though 0 is default)
enum Month {
    JANUARY = 1,
    FEBRUARY, // 2
    MARCH,    // 3
    APRIL,    // 4
    MAY,      // 5
    JUNE,     // 6
    JULY,     // 7
    AUGUST,   // 8
    SEPTEMBER,// 9
    OCTOBER,  // 10
    NOVEMBER, // 11
    DECEMBER  // 12
};

// Function to get the days in a month (ignoring leap year for February)
int get_days_in_month(enum Month month) {
    switch (month) {
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            return 30;
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            return 31;
        case FEBRUARY:
            return 28; // Simple case, ignoring leap year
        default:
            return 0;
    }
}

int main() {
    printf("Days in each month (non-leap year):\n");

    // Loop through the enum values from 1 to 12
    enum Month m;
    for (m = JANUARY; m <= DECEMBER; m++) {
        // A helper switch to print the month name for readability
        switch(m) {
            case JANUARY:   printf("JANUARY:   %d days\n", get_days_in_month(m)); break;
            case FEBRUARY:  printf("FEBRUARY:  %d days\n", get_days_in_month(m)); break;
            case MARCH:     printf("MARCH:     %d days\n", get_days_in_month(m)); break;
            case APRIL:     printf("APRIL:     %d days\n", get_days_in_month(m)); break;
            case MAY:       printf("MAY:       %d days\n", get_days_in_month(m)); break;
            case JUNE:      printf("JUNE:      %d days\n", get_days_in_month(m)); break;
            case JULY:      printf("JULY:      %d days\n", get_days_in_month(m)); break;
            case AUGUST:    printf("AUGUST:    %d days\n", get_days_in_month(m)); break;
            case SEPTEMBER: printf("SEPTEMBER: %d days\n", get_days_in_month(m)); break;
            case OCTOBER:   printf("OCTOBER:   %d days\n", get_days_in_month(m)); break;
            case NOVEMBER:  printf("NOVEMBER:  %d days\n", get_days_in_month(m)); break;
            case DECEMBER:  printf("DECEMBER:  %d days\n", get_days_in_month(m)); break;
        }
    }
    
    return 0;
}