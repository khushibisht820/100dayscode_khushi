#include <stdio.h>

int findFirstOccurrence(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int first = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

int findLastOccurrence(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    int last = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

void solve_q101(int nums[], int size, int target) {
    int first = findFirstOccurrence(nums, size, target);
    int last = findLastOccurrence(nums, size, target);
    printf("%d, %d\n", first, last);
}