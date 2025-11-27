#include <stdio.h>

int main() {
    float s1, s2, s3;

    scanf("%f", &s1);
    scanf("%f", &s2);
    scanf("%f", &s3);

    if (s1 == s2 && s2 == s3) {
        printf("Equilateral\n");
    } else if (s1 == s2 || s1 == s3 || s2 == s3) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

    return 0;
}