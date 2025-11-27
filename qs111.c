#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000 

void solve_q111(int arr[], int size, int k) {
    // Implementing a deque for negative indices
    int dq[MAX_SIZE];
    int front = 0, rear = -1;
    
    for (int i = 0; i < size; i++) {
        // 1. Remove indices that are out of the current window
        if (front <= rear && dq[front] == i - k) {
            front++;
        }
            
        // 2. Add current element's index if it is negative
        if (arr[i] < 0) {
            rear++;
            dq[rear] = i;
        }
            
        // 3. Process the window starting from index k-1
        if (i >= k - 1) {
            if (front <= rear) {
                // First element in deque is the first negative
                printf("%d", arr[dq[front]]);
            } else {
                printf("0");
            }
            if (i < size - 1) {
                printf(" ");
            }
        }
    }
    printf("\n");
}