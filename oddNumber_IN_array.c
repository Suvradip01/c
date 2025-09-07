#include <stdio.h>

int CountOdd(int arr[], int n);  // Function prototype

int main() {
    int n;  // Declare 'n' to get the array size
    printf("Enter the number of elements: ");  // Ask for the array size
    scanf("%d", &n);  // Get the size of the array
    
    int arr[n];  // Initialize the array with the given size
    
    printf("Enter %d elements: \n", n);  // Ask for the array elements
    for (int i = 0; i < n; i++) {  // Fill the array
        scanf("%d", &arr[i]);
    }
    
    int oddCount = CountOdd(arr, n);  // Get the count of odd numbers
    printf("Count of odd numbers = %d\n", oddCount);  // Print the result
    
    return 0;
}

int CountOdd(int arr[], int n) {
    int count = 0;  // Initialize counter
    
    for (int i = 0; i < n; i++) {  // Loop through the entire array
        if (arr[i] % 2 != 0) {  // Check if the number is odd
            count++;  // Increment the count if odd
        }
    }
    
    return count;  // Return the count of odd numbers
}
