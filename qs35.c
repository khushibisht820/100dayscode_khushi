#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);
    while (i <= n) {
        if (n % i == 0) {
            printf("%d", i);
            if (i < n) {
                printf(", ");
            }
        }
        i++;
    }
    printf("\n");
    return 0;
}