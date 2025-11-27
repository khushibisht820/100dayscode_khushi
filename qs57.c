#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int i = 0;
    long long sum = 0;

    printf("Enter %d elements:\n", size);
    while (i < size) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        i++;
    }

    printf("Sum of all elements in the array is: %lld\n", sum);
    return 0;
}