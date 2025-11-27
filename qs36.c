#include <stdio.h>

int main() {
    int n1, n2, hcf;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    int i = 1;
    while (i <= n1 && i <= n2) {
        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
        i++;
    }

    printf("HCF/GCD of %d and %d is: %d\n", n1, n2, hcf);
    return 0;
}