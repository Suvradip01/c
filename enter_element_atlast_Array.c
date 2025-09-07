#include<stdio.h>

int main() {
    int n;
    int *ptr;

    // Asking the user for the size of the array
    printf("Enter size of the array : ");
    scanf("%d", &n);

    int arr[n]; // Declaring an array of size 'n'
    ptr = &arr[0]; // Assigning the address of the first element of the array to 'ptr'

    // Asking the user to enter elements of the array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Asking the user to enter a number to add at the end of the array
    int num;
    printf("Enter a number to add at the end of the array : ");
    scanf("%d", &num);

    // Adding the number at the end of the array
    arr[n] = num; // This line should be arr[n - 1] = num; because array indices start from 0
    n++; // Incrementing the size of the array

    // Printing the modified array
    printf("Modified array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
