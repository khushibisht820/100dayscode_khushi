#include <stdio.h>
#include <stdlib.h>

int* solve_q117(int arr1[], int m, int arr2[], int n) {
    int* merged_arr = (int*)malloc((m + n) * sizeof(int));
    if (merged_arr == NULL) return NULL;
    
    int p1 = 0;
    int p2 = 0;
    int k = 0;
    
    while (p1 < m && p2 < n) {
        if (arr1[p1] <= arr2[p2]) {
            merged_arr[k] = arr1[p1];
            p1++;
        } else {
            merged_arr[k] = arr2[p2];
            p2++;
        }
        k++;
    }
        
    while (p1 < m) {
        merged_arr[k] = arr1[p1];
        p1++;
        k++;
    }
        
    while (p2 < n) {
        merged_arr[k] = arr2[p2];
        p2++;
        k++;
    }
        
    return merged_arr;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(" ");
        }
    }
    printf("\n");
}