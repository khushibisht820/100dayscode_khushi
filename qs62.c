#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int i = 0;
    int start = 0;
    int end = size - 1;

    printf("Enter %d elements:\n", size);
    while (i < size) {
        scanf("%d", &arr[i]);
        i++;
    }

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("Reversed array is:\n");
    i = 0;
    while (i < size) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    return 0;
}