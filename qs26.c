#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d:\n", n);
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}