#include<stdio.h>

int main(){
    int i, j, n;
    printf("Enter range: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d: ", n);
    for(i = 2; i <= n; i++) {
        int is_prime = 1; // Assume i is prime initially
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                is_prime = 0; // If i is divisible by any number other than 1 and itself, it's not prime
                break;
            }
        }
        if(is_prime) {
            printf("%d ", i);
        }
    }
    return 0;
}
