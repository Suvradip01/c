#include<stdio.h>
#include<math.h>

int main() {
    int num, n, digit;
    int i;
    int sum = 0;

    printf("Enter number = ");
    scanf("%d", &num);

    printf("Enter total digits: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter digit %d: ", i);
        scanf("%d", &digit);
        sum += pow(digit, i); // Add the power of each digit to the sum
    }

    if (num == sum) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
