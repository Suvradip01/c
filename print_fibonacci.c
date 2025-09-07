

#include <stdio.h>

// Function to calculate the nth Fibonacci number
int fibonacci(int n);

int main() {
    int range;
    printf("Enter range = ");
    scanf("%d", &range);

    // Print Fibonacci series up to the given range
    for (int i = 0; i < range; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
