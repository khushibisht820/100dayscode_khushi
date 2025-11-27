#include <stdio.h>

int main() {
    int days_late;
    float fine = 0.0;
    printf("Enter number of days late: ");
    scanf("%d", &days_late);

    if (days_late <= 0) {
        fine = 0.0;
    } else if (days_late <= 5) {
        fine = days_late * 2;
    } else if (days_late <= 10) {
        fine = (5 * 2) + ((days_late - 5) * 4);
    } else if (days_late <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days_late - 10) * 6);
    } else {
        printf("Membership Cancelled.\n");
        return 0;
    }

    printf("Total Fine: Rs. %.2f\n", fine);
    return 0;
}