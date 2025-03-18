#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by k positions
void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where k >= n
    
    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);
    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Step 3: Reverse the remaining elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;
    
    // Read the size of the array
    scanf("%d", &n);
    int arr[n];
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the number of positions to rotate
    scanf("%d", &k);
    
    // Rotate the array
    rotateArray(arr, n, k);
    
    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}