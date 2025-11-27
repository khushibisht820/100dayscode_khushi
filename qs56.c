#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int i = 0;

    printf("Enter %d elements:\n", size);
    while (i < size) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        i++;
    }

    printf("Elements in the array are:\n");
    i = 0;
    while (i < size) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    return 0;
}