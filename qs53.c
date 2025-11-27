#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space < i; space++) {
            printf(" ");
        }
        for (int star = 1; star <= n - i + 1; star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}