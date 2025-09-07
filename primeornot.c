#include <stdio.h>

int main() {
    int num;
    printf("Enter Number = ");
    scanf("%d", &num);

    int i, isPrime=1; // Assume the number is prime initially

    // Check divisibility from 2 to num/2(half of the num)
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0; // If divisible, mark as not prime
            break;
        }
    }


    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
