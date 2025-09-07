#include <stdio.h>
#include <stdlib.h> // Include the standard library header for dynamic memory allocation

int main() {
    float *ptr; // Pointer to a float array
    int n; // Number of elements in the array

    printf("Enter the number of floats to allocate: ");
    scanf("%d", &n); // Get the number of floats to allocate

    // Allocate memory for n floats
    ptr = (float *)malloc(n * sizeof(float));


    // Collect user input for each float in the array
    for (int i = 0; i < n; i++) {
        printf("Enter float number : ");
        scanf("%f", &ptr[i]);
    }

    // Display all floats entered by the user
    printf("Floats you entered:\n");
    for (int j = 0; j < n; j++) {
        printf("%f\n", ptr[j]);
    }


    return 0; 
}
