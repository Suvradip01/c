#include<stdio.h>
#include<stdlib.h> // Include <stdlib.h> for malloc

int main() {
    int i;
    int *arr[10];

    // Input numbers into the array
    for(i = 0; i < 10; i++) {
        printf("Enter number %d: ", i+1);
        arr[i] = (int *)malloc(sizeof(int)); // Allocate memory for an integer
        scanf("%d", arr[i]); // Input the integer value
    }

    // Print the values stored in the array
    printf("Values stored in the array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", *arr[i]); // Print each value
    }
    printf("\n");


 // Print the values stored in the array in reverse order
    printf("Values stored in the array in reverse order:\n");
    for(i = 9; i >= 0; i--) {
    printf("%d ", *arr[i]); // Print each value
    }
    printf("\n");


    // Free allocated memory
    for(i = 0; i < 10; i++) {
        free(arr[i]);
    }
    

    return 0;
}
