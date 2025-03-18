#include <stdio.h>

// Function to reverse a section of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by K positions
void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where k >= n
    
    if (k == 0) return; // No rotation needed if k is 0 or multiple of n
    
    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);
    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Step 3: Reverse the remaining elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;

    // Read input size
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read number of rotations
    scanf("%d", &k);

    // Rotate the array
    rotateArray(arr, n, k);

    // Print rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
