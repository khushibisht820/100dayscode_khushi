#include <stdio.h>

struct Point {
    int x;
    int y;
};

// Function to print the members of the struct
void printPoint(struct Point p) {
    printf("Point Coordinates: (%d, %d)\n", p.x, p.y);
}

int main() {
    struct Point p1 = {10, 20};
    struct Point p2 = {-5, 3};

    printf("Point 1:\n");
    printPoint(p1);

    printf("Point 2:\n");
    printPoint(p2);

    return 0;
}