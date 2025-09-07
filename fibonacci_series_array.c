#include <stdio.h>

int main() {
    int n;
    printf("Enter range = ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Range must be at least 2.\n");
        return 0;
    }

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    // Display the first two Fibonacci numbers
    printf("%d\t%d\t", fib[0], fib[1]);

    for (int i = 2; i < n; i++) {  // Loop should go from 2 to n-1
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d\t", fib[i]);
    }

    printf("\n");  // Add newline at the end
    return 0;
}
