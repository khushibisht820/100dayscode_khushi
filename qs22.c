#include <stdio.h>

int main() {
    float cp, sp, diff, percentage;
    printf("Enter Cost Price (CP): ");
    scanf("%f", &cp);
    printf("Enter Selling Price (SP): ");
    scanf("%f", &sp);

    diff = sp - cp;

    if (diff > 0) {
        percentage = (diff / cp) * 100;
        printf("Profit: %.2f\n", diff);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (diff < 0) {
        percentage = (-diff / cp) * 100;
        printf("Loss: %.2f\n", -diff);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("Neither Profit nor Loss (Break Even)\n");
    }
    return 0;
}