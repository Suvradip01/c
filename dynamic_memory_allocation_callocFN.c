#include <stdio.h>
#include <stdlib.h> // Include the standard library header for dynamic memory allocation

int main() {
    int *ptr; // Declare a pointer to an integer
    int n;
    int i;

    printf("Enter the size of the memory: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    ptr = (int *)calloc(n, sizeof(int)); // (type*)malloc(memory size * size of(type));
    


    // Read n integers from user and store them in the allocated memory
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // Display all numbers entered by the user
    printf("Numbers you entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");


    return 0; 
}
