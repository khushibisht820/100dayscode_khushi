#include <stdio.h>

int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("January\nDays: 31\n");
            break;
        case 2:
            printf("February\nDays: 28 or 29\n");
            break;
        case 3:
            printf("March\nDays: 31\n");
            break;
        case 4:
            printf("April\nDays: 30\n");
            break;
        case 5:
            printf("May\nDays: 31\n");
            break;
        case 6:
            printf("June\nDays: 30\n");
            break;
        case 7:
            printf("July\nDays: 31\n");
            break;
        case 8:
            printf("August\nDays: 31\n");
            break;
        case 9:
            printf("September\nDays: 30\n");
            break;
        case 10:
            printf("October\nDays: 31\n");
            break;
        case 11:
            printf("November\nDays: 30\n");
            break;
        case 12:
            printf("December\nDays: 31\n");
            break;
        default:
            printf("Invalid month number\n");
            break;
    }
    return 0;
}