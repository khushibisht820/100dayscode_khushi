#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000 

void solve_q110(int arr[], int size, int k) {
    // Implementing a deque using an array and two pointers
    int dq[MAX_SIZE];
    int front = 0, rear = -1;
    
    for (int i = 0; i < size; i++) {
        // 1. Remove elements outside the current window
        if (front <= rear && dq[front] == i - k) {
            front++;
        }
            
        // 2. Maintain decreasing order in the deque
        while (front <= rear && arr[dq[rear]] <= arr[i]) {
            rear--;
        }
            
        // 3. Add current element's index
        rear++;
        dq[rear] = i;
        
        // 4. Print the maximum element for the current window
        if (i >= k - 1) {
            printf("%d", arr[dq[front]]);
            if (i < size - 1) {
                printf(" ");
            }
        }
    }
    printf("\n");
}