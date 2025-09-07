#include <stdio.h>

int reverse(int arr[], int n);

void printarr(int arr[], int n);

int main() {
   
    int arr[] = {1, 2, 3, 4, 5, 6};

    // Reverse the elements of the array
    reverse(arr, 6);

    // Print the reversed array
    printarr(arr, 6);
    
    return 0;
}

// Function to reverse an array
int reverse(int arr[], int n) {
    // Loop through the first half of the array to swap elements
    for (int i = 0; i < n / 2; i++) {
        int firstVal = arr[i];           // Store the value of the first element
        int secondVal = arr[n - i - 1];  // Store the value of the corresponding element from the end

        // Swap the first and second values
        arr[i] = secondVal;
        arr[n - i - 1] = firstVal;
    }
}

// Function to print an array
void printarr(int arr[], int n) {
    // Loop through each element of the array
    for (int i = 0; i < n; i++) {
        // Print the element followed by a tab for spacing
        printf("%d\t", arr[i]);
    }
    printf("\n"); // Add a newline at the end to clean up the output
}
