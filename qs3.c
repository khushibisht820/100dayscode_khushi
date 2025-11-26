#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    scanf("%f", &length);
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}