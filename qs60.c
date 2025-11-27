#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int i = 0;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    printf("Enter %d elements:\n", size);
    while (i < size) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
        i++;
    }

    printf("Total positive elements: %d\n", positive_count);
    printf("Total negative elements: %d\n", negative_count);
    printf("Total zero elements: %d\n", zero_count);
    return 0;
}