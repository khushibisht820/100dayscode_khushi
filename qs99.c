#include <stdio.h>
#include <string.h>

void formatDate(char date[]) {
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    
    // Assuming format is strictly "DD/MM/YYYY" (10 characters)
    if (strlen(date) != 10 || date[2] != '/' || date[5] != '/') {
        printf("Invalid date format.\n");
        return;
    }
    
    // Extract parts: DD, MM, YYYY
    char dayStr[3] = {date[0], date[1], '\0'};
    char monthStr[3] = {date[3], date[4], '\0'};
    char yearStr[5] = {date[6], date[7], date[8], date[9], '\0'};
    
    int monthIndex = (monthStr[0] - '0') * 10 + (monthStr[1] - '0');
    
    if (monthIndex < 1 || monthIndex > 12) {
        printf("Invalid month value.\n");
        return;
    }
    
    // Construct the new format "DD-Month-YYYY"
    char newDate[20];
    sprintf(newDate, "%s-%s-%s", dayStr, months[monthIndex - 1], yearStr);
    
    printf("Original: %s, New Format: %s\n", date, newDate);
}

int main() {
    char date1[] = "25/04/2023"; // 04 -> Apr
    char date2[] = "01/12/2024"; // 12 -> Dec
    
    formatDate(date1);
    formatDate(date2);
    
    return 0;
}