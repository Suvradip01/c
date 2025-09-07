#include<stdio.h>
#include<math.h>

// Function prototype declaration
float squarroot(int n);

int main() {
    int n;
    
    // Prompt the user to enter a number
    printf("Enter number: ");
    scanf("%d", &n);
    
    // Call the squarroot function and print the result
    printf("Square root of %d is: %f", n, squarroot(n));
    
    return 0;
}

// Function definition to calculate square root
float squarroot(int n) {
    // Calculate square root using sqrt function from math.h library
    float result = sqrt(n);
    return result; // Return the calculated square root
}
