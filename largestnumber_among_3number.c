#include <stdio.h>

int main() {
   
    int n, num;
    int largest = 0; // Initialize largest with a value less than any possible input

    
    printf("Enter n: ");
    scanf("%d", &n);

    // Loop through each element
    for (int i = 1; i <= n; i++) {
       
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Check if the entered number is greater than the current largest which is 0 initialy
        if (num > largest) {
            // If yes, update the largest number
            largest = num;
        }
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}
