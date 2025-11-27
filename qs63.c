#include <stdio.h>

int main() {
    int size1, size2, merged_size;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    merged_size = size1 + size2;
    int arr1[size1], arr2[size2], merged_arr[merged_size];
    int i, j;

    printf("Enter %d elements for the first array:\n", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
        merged_arr[i] = arr1[i];
    }

    printf("Enter %d elements for the second array:\n", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
        merged_arr[size1 + i] = arr2[i];
    }

    printf("Merged array is:\n");
    for (i = 0; i < merged_size; i++) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");
    return 0;
}